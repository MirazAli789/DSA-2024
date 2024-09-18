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
bool is_present(node *head, int key)
{
    node *temp = head;
    while (temp)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next; // keep in mind
    }
    return false;
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

    cout << is_present(head, 49);
    cout << endl;
    return 0;
}
