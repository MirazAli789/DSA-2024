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
int len_of_ll(node *head)
{
    node *temp = head;
    int count = 0;
    // keep the track of the number of elements in the linked list
    while (temp)
    {
        count += 1;
        temp = temp->next;
    }
    return count;
}
node *delete_end(node *head)
{
    if (head == NULL || head->next == nullptr)
    {
//checking whether the linked list contains single element or no element at all
        return nullptr;
    }
    // node *temp1 = head;
    // node *temp2 = head->next;
    // while (temp2->next != nullptr)
    // {
    //     temp1 = temp2;
    //     temp2 = temp2->next;
    // }
    // temp1->next = nullptr;
    // delete temp2;
    // return head;
    node * temp = head;
    while(temp->next->next!=nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
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
    cout << endl;
    node *head2 = delete_end(head);
    cout<<"After deletion: " << endl;
    traverse(head2);
    return 0;
}
