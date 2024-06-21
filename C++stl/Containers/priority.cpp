// priority queue
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // the largest element becomes the top of the queue
    priority_queue<int>pq; 
    pq.push(23);
    pq.push(12);
    pq.push(311);
    pq.push(123);
    cout<<pq.top(); //returns 311 as top
    pq.pop(); //311 will be deleted
    cout<<endl;
    cout<<pq.top();
    pq.push(552);
    cout<<endl;
    cout<<pq.top();
    return 0;
}