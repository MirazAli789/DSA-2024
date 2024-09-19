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
node *delete_ele(node *head, int key)
{
    if (head == NULL || head->next == nullptr)
    {
        return NULL;
    }
    bool found = 0;
    node *temp1 = head, *temp2 = head;
    while (temp1 != nullptr)
    {
        if (temp1->data == key)
        {
            found = 1;
            if (temp1 == head)
            {
                head = temp1->next;
                delete temp1;
                return head;
            }
            temp2->next = temp1->next;
            delete temp1;
        }
        temp2 = temp1;
        temp1 = temp1->next;
    }
    if (found == 0)
    {
        cout << "Element not found";
        return head;
    }

    else
        return head;
}
int main()
{
    vector<int> arr = {2, 44, 5, 1, 45};
    node *head = arr_to_ll(arr);
    head = delete_ele(head, 5);
    traverse(head);
    cout << endl;
    return 0;
}