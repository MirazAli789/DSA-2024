#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<5;i++){
        arr[i]=arr[i+1];
    }


    cout<<endl;
    return 0;
}
