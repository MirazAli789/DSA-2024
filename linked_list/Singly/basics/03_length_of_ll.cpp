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
// function to find the length of linked list
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
// function to print the linked list:
void print_ll(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "nullptr";
}
int main()
{
    node *head = new node(1);
    node *temp = head;
    for (int i = 2; i <= 10; i++)
    {
        node *n = new node(i);
        temp->next = n;
        temp = temp->next;
    }
    //print the list
    print_ll(head);
    cout << endl;
    //size of the list
    cout<<"Size of the linked list = "<<len_of_ll(head);
    return 0;
}
