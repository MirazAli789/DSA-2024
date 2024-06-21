// #include<bits/stdc++.h>
// #include<cmath>
// using namespace std;

// bool armstrong(int n) {
//     int original = n;
//     int sum = 0;
//     int num_digits = 0;

//     // Count the number of digits
//     while (n > 0) {
//         num_digits++;
//         n /= 10;
//     }

//     // Reset n to the original value for digit extraction
//     n = original;

//     // Calculate the sum of each digit raised to the power of num_digits
//     while (n > 0) {
//         int digit = n % 10;
//         sum += pow(digit, num_digits);
//         n /= 10;
//     }

//     // Check if the sum equals the original number
//     return sum == original;
// }

// int main()
// {
//     cout<<armstrong(153);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int dig(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}
bool armstrong(int n, int digit)
{
    int rem, ans = 0, org = n;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans = ans+ pow(rem, digit);
    }
    
    if(ans==org)
    return 1;

    else
    return 0;
}
int main()
{
    int n, digit;
    cout << "Enter n\n";
    cin >> n;
    digit = dig(n);
    cout << armstrong(n, digit);
    return 0;
}