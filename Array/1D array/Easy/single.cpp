#include<bits/stdc++.h>
using namespace std;

int single_ele(vector<int> arr){
    int ans = -1;
    for(int i = 0; i < arr.size(); i++){
        int cnt = 0;
        for(int j = 0; j < arr.size(); j++){
            if(arr[j] == arr[i]){
                cnt++;
            }
        }
        if(cnt == 1){
            ans = arr[i];
            break;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 3, 3, 4, 4};
    cout << single_ele(arr) << endl;
    return 0;
}
