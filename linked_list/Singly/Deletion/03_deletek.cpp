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
node *deletek(node *head, int k)
{
    if (head == NULL || head->next == nullptr)
    {
        return NULL;
    }
    if (k == 1)
    {
        node *temp = head;
        head = temp->next;
        delete temp;
        return head;
    }
    // keep a counter variable which will keep a track of the pointer
    node *temp = head;
    int cnt = 1;
    while (temp != nullptr && cnt != k - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp == nullptr)
    {
        cout << "Out of range!!!!\n";
        return head;
    }
    else
    {
        node *temp1 = temp->next;
        temp->next = temp1->next;
        delete temp1;
        return head;
    }
}
int main()
{
    vector<int>arr = {312,432,54,34,67};
    node *head = arr_to_ll(arr);
    head = deletek(head,5);
    traverse(head);
    cout << endl;
    return 0;
}
