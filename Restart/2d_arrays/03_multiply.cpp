#include<bits/stdc++.h>
using namespace std;
void multiply(int arr1[2][3],int arr2[3][2]){
    int ans[2][2];
    for(int i = 0;i<2;i++)
    {
        for(int j = 0;j<2;j++){
            ans[i][j] = 0;
            for(int k = 0;k<3;k++){
                ans[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i = 0;i<2;i++)
    {
        for(int j =0;j<2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr1[2][3] = {{1,1,2},{3,4,3}};
    int arr2[3][2] = {{2,4},{1,3},{3,1}};
    multiply(arr1,arr2);
    cout<<endl;
    return 0;
}
