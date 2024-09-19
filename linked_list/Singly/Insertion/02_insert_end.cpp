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
node *insert_end(node *head, int data)
{
    if (head == NULL)
    {
        return new node(data, nullptr);
    }
    // ptr is used to traverse until the end of the linked list
    node *ptr = head, *temp = new node(data);
    while (ptr->next != nullptr)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return head;
}
int main()
{
    vector<int> arr = {32, 4, 51, 63, 525, 36, 1};
    node *head = arr_to_ll(arr);
    head = insert_end(head, 690);
    traverse(head);
    cout << endl;
    return 0;
}
