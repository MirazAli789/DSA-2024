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
node *insert_begin(node *head, int key)
{
    node *temp = new node(key);
    temp->next = head;
    head = temp;
    return head;
}
int main()
{
    vector<int> arr = {2, 44, 5, 1, 45};
    node *head = arr_to_ll(arr);
    head = insert_begin(head, 56);
    traverse(head);
    cout << endl;
    return 0;
}
