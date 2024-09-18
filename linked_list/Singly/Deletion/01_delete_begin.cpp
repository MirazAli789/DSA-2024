// delete the beinning node from a linked list
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data, node *next)
    {
        this->data = data;
        this->next = next;
    }
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
// delete from beginning
node *delete_begin(node *head)
{
    if(head==NULL)
    {
        return nullptr;
    }
    node *temp = head;
    head = temp->next;
    delete temp;
    return head;
}
void traverse(node *head)
{
    node *itr = head;
    while (itr != nullptr)
    {
        cout << itr->data << "->";
        itr = itr->next;
    }
    cout << "nullptr";
}
int main()
{
    node *head = new node(3);
    node *itr = head;
    for (int i = 4; i < 10; i++)
    {
        node *n1 = new node(i);
        itr->next = n1;
        itr = itr->next;
    }
    traverse(head);
    node *head1 = delete_begin(head);
    cout << "\nAfter deletion :"
         << endl;
    itr = head1;
    while (itr != nullptr)
    {
        cout << itr->data << "->";
        itr = itr->next;
    }
    cout << "nullptr";
    cout << endl;
    return 0;
}
