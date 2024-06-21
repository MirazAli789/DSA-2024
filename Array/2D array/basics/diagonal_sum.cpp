//find the two diagonal sums of the square matrix
#include<bits/stdc++.h>
using namespace std;
vector<int> diagonal(int arr[][4],int row,int col)
{
    vector<int>ans;
    int first=0;
    //first diagonal sum
    for(int i=0;i<row;i++){
        first+=arr[i][i];
    }
    ans.push_back(first);
    int second=0,i=0,j=col-1;
    //second diagonal sum
    while(i<row&&j>=0){
        second+=arr[i][j];
        i++;
        j--;
    }
    ans.push_back(second);

    return ans;
}
int main()
{
    int arr[4][4] = {5,8,3,9,6,2,8,4,5,3,2,2,2,8,1,9};
    vector<int>ans;
    ans = diagonal(arr,4,4);
    for(auto it:ans)
    {
        cout<<(it)<<" ";
    }
    cout<<endl;
    return 0;
}
