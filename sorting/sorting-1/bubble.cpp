#include <bits/stdc++.h>
using namespace std;
void bubble(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool is_swapped = 0;
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                swap(arr[j], arr[j + 1]);
                is_swapped = 1;
            }
        }
        if (is_swapped == 0)
            break;
        
        cout<<"run"<<endl;
    }
}
int main()
{
    int arr[5] = {5,4,3,2,1};//worst case 
    bubble(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
