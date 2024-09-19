#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
    node(int data, node *prev, node *next)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
    node(int data, node *prev)
    {
        this->data = data;
        this->prev = prev;
        this->next = nullptr;
    }
};
node *arr_to_dll(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *move = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *newnode = new node(arr[i], move);
        move->next = newnode;
        move = move->next;
    }
    return head;
}
void traverse(node *head)
{
    node *temp = head;
    cout << "nullptr";
    while (temp != nullptr)
    {
        cout << "<-" << temp->data << "->";
        temp = temp->next;
    }
    cout << "nullptr \n";
}
node *delete_begin(node *head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty \n";
        return head;
    }
    node *temp = head;
    head = temp->next;
    head->prev = nullptr;
    delete temp;
    return head;
}
int main()
{
    vector<int> arr = {12, 4, 551, 4};
    node *head = arr_to_dll(arr);
    head = delete_begin(head);
    traverse(head);
    cout << endl;
    return 0;
}
