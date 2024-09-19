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
node *arr_to_ll(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *move = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        move->next = temp;
        move = move->next;
    }
    return head;
}
void traverse(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "nullptr\n";
}
node *insert_before(node *head, int el, int data)
{
    if (head->data == el)
    {
        return new node(data, head);
    }
    node *temp1 = head, *temp2 = nullptr;
    while (temp1->data != el)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    node *newnode = new node(data, temp1);
    temp2->next = newnode;
    return head;
}
int main()
{
    vector<int> arr = {2, 323, 42, 4, 2, 5, 235};
    node *head = arr_to_ll(arr);
    head = insert_before(head, 235, 420);
    traverse(head);
    cout << endl;
    return 0;
}
