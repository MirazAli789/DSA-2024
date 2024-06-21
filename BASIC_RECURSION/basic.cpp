// 1. print name 5 times
// #include <bits/stdc++.h>
// using namespace std;
// void print(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }

//     cout << "name ";
//     print(i + 1, n);
// }
// int main()
// {
//     print(1, 34);
//     cout << endl;
//     return 0;
// }
// time complexity = O(n)
// space complexity = O(n)

// 2. print linearly from 1 to n
// #include <bits/stdc++.h>
// using namespace std;
// void print(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }

//     cout << i << endl;
//     print(i + 1, n);
// }
// int main()
// {

//     print(1, 23);
//     cout << endl;
//     return 0;
// }
// time complexity = O(n)
// space complexity = O(n)


// 3.print from n to 1
// #include <bits/stdc++.h>
// using namespace std;
// void print(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }

//     cout << n << " ";
//     print(n - 1);
// }

// void print(int i,int n){
//     if(i>n){
//         return;
//     }

//     print(i+1,n);
//     cout<<i<<" ";
// }

// time complexity = O(n)
// space complexity = O(n)
// int main()
// {
//     // print(6);
//     print(1,5);
//     cout << endl;
//     return 0;
// }


// 4. print from 1 to n
#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if(i==0)
    return;

    print(i-1,n);
    cout<<i<<endl;
}
int main()
{
    print(5,5);
    cout<<endl;
    return 0;
}
