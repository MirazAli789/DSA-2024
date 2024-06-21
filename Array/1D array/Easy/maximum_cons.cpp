#include <bits/stdc++.h>
using namespace std;
int maximum(vector<int> nums)
{
    int count = 0;
    int maxi = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            count++;
            maxi = max(maxi,count);
        }
        else{
            count =0;
        }
    }
    return maxi;
}
int main()
{
    vector<int> nums(6);
    nums = {1,0,1,1,1,0};
    cout << maximum(nums);
    cout << endl;
    return 0;
}
