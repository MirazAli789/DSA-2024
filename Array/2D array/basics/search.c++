#include<bits/stdc++.h>
using namespace std;
bool ls(int arr[3][4],int key){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==key){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<ls(arr,6648218);
    cout<<endl;
    return 0;
}
