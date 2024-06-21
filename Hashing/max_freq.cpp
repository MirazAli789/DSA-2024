#include <bits/stdc++.h>
using namespace std;
int key_atvalue(map<int, int> mp, int num)
{
    for (auto it : mp)
    {
        if (it.second == num)
            return it.first;
    }
}
int main()
{
    int arr[5] = {1, 2, 1, 3, 4};
    map<int, int> mp;
    for (int i = 0; i < 5; i++)
    {
        mp[arr[i]]++;
    }
    vector<int> ans;
    for (auto it : mp)
    {
        ans.push_back(it.second);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    int max_occ= INT_MIN;
    for(int i=0;i<ans.size();i++){
        max_occ = max(max_occ,ans[i]);
    }
    cout<<endl;
    cout<<key_atvalue(mp,max_occ);

    cout << endl;
    cout<<key_atvalue(mp,1);
    return 0;
}
