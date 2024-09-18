#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    // members of each node
    int data;
    node *next;
    // constructor
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
    //we cannot return the entire linked list, so we return the ponter to the first element of the linked list
    return head;
}
int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    // // copy the first element in the head of the ll
    // node *head = new node(arr[0]);
    // node *move = head;
    // for (int i = 1; i < 5; i++)
    // {
    //     node *n = new node(arr[i]);
    //     move->next = n;
    //     move = move->next;
    // }
    // move = head;
    // while (move != nullptr)
    // {
    //     cout << move->data << "->";
    //     move = move->next;
    // }
    // cout << "nullptr";

    vector<int>arr = {1,2,3,4,5};
    // printing the linked list
    node *move = arr_to_ll(arr);
    while(move!=nullptr)
    {
        cout<<move->data<<"->";
        move= move->next;
    }
    cout<<"nullptr";
    cout << endl;
    return 0;
}
