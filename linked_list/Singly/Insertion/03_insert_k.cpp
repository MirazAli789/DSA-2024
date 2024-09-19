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
node *insert_k(node *head, int k, int data)
{
    if (head == NULL)
    {
        
        return new node(data);
    }
    if(k==1)
    {
        // node to be inserted at beginning
        return new node(data, head);
    }
    node *temp = head;
    int cnt = 1;
    while (temp != nullptr && cnt != k - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp == nullptr)
    {
        cout << "K is out of range \n";
        return head;
    }
    node *newnode = new node(data, temp->next);
    temp->next = newnode;
    return head;
}
int main()
{
    vector<int> arr = {2, 323, 42, 4, 2, 5, 235};
    node *head = arr_to_ll(arr);
    head = insert_k(head,8,66645);
    traverse(head);
    cout << endl;
    return 0;
}
