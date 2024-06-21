#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;

    // nested pairs
    cout << endl;
    pair<int, pair<int, int>> r = {1, {2, 3}};
    cout << r.first << " " << r.second.first << " " << r.second.second << " ";
    cout << endl;
    pair<pair<int, int>, pair<int, int>> q = {{1, 2}, {3, 4}};
    cout << q.first.first << " " << q.first.second << " " << q.second.first << " " << q.second.second << " ";

    // array of pairs
    cout << endl;
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first << " " << arr[0].second << " " << arr[1].first << " " << arr[1].second << " " << arr[2].first << " " << arr[2].second << " ";
    pair<int, int> e = {1, 2};
    cout << e.first << " " << e.second << " ";
    cout << endl;
    pair<float, int> j = {1.23, 2};
    cout << j.first << " " << j.second;
    return 0;
}