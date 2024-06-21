/*
1: Take 20 elements from user input and find its sum with the help
of an array.
2: Calculate the average of elements in an array of size 18.
3: Find the index of a specific element in an array, if the element
is nor present, print -1. Ask the size of the array from the user and
then implement it.
4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print
the element of the arrays.
5: Find the second largest element in an array of unique elements
of size n. Where n>3.

6: Find the third smallest element in an array of unique elements
size n. Where n>3.
7: What is Byte addressable?

*/

#include <bits/stdc++.h>
using namespace std;
int index(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int second(int arr[], int n)
{
    int max1 = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
            max1 = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    return max2;
}
int third_smallest(int arr[],int n){
    int min1 = INT_MAX,min2 = INT_MAX,min3 = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min1){
            min1 = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<min2&&arr[i]>min1){
            min2=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<min3&&arr[i]>min1&&arr[i]>min2){
            min3 = arr[i];
        }
    }
    return min3;
}
int main()
{
    // int arr[20];
    // cout<<"Enter 20 elements\n";
    // for(int i=0;i<20;i++){
    //     cin>>arr[i];
    // }

    // int sum =0;
    // for(int i=0;i<20;i++){
    //     sum+=arr[i];
    // }
    // cout<<"Sum of 20 numbers = "<<sum;
    // cout<<endl;

    // 2
    //  int arr[18] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    //  float sum = 0;
    //  for(int i=0;i<18;i++){
    //      sum+=arr[i];
    //  }
    //  float avg = sum/18;
    //  cout<<"Average of number = "<<avg;
    // 3

    // int arr[18] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    // cout<<index(arr,18,7);

    // 4
    //  char arr[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    //  for (int i = 0; i < 26; i++)
    //  {
    //      cout<<arr[i]<<" ";
    //  }

    // 5
    // int arr[5] = {3, 10, 7, 2, 1};
    // cout << second(arr, 5);

    //6
    int arr[5] = {2, 10, 7, 4, 1};
    cout<<third_smallest(arr,5);
    return 0;
}