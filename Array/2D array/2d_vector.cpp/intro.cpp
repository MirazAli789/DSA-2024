#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declaration
    vector<vector<int>> arr(3, vector<int>(3, 1));
    // declaring an array of size of size [3][3] and initializing all the values of the matrix with 1
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout<<"rows = "<<arr.size();
    cout<<endl;
    cout<<"columns = "<<arr[0].size();
    return 0;
}
