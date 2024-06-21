//return the index of the coloumn hvaing the maximum sum
#include<bits/stdc++.h>
using namespace std;
int max_col_sum(int arr[][3],int row,int col)
{
    int ind=-1,maxsum=INT_MIN;
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++)
        {
            sum+=arr[j][i];
        }
        if(sum>maxsum)
        {
            maxsum=sum;
            ind=i;
        }
    }
    return ind;
}
int main()
{
    int arr[3][3] = {2,3,7,4,5,1,9,8,7};
    cout<<max_col_sum(arr,3,3);
    
    cout<<endl;
    return 0;
}
