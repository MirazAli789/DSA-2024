#include <bits/stdc++.h>
using namespace std;
// definition of a node in a linked list
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
int main()
{
    node *n1 = new node(12, nullptr); // creating a new node
    cout << n1->data<<endl;
    cout<<n1->next;
    cout << endl;
    return 0;
}
