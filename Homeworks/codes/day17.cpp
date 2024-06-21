#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 1 add digits
    /*Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.*/
    /*int addDigits(int num) {
        while(num>9){
            int sum =0,rem;
            while(num){
                rem = num%10;
                num/=10;
                sum+=rem;
            }
            num = sum;
        }
        return num;
    }*/

    // 2 Leap year
    /*For an input year N, find whether the year is a leap or not. */
    /*int isLeap(int N){
        //code here
        if(N%400==0){
            return 1;
        }
        else if(N%4==0&&N%100!=0){
            return 1;
        }
        else {
            return 0;
        }
    }*/

    // 3 Reverse Integer
    /*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31 to 2^31 - 1], then return 0.*/

    /*int reverse(int x) {
        int rem,ans =0;
        while(x){
            rem= x%10;
            x/=10;
            if(ans>INT_MAX/10 || ans< INT_MIN/10){
                return 0;
            }
            ans = ans*10+rem;
        }
        return ans;
    }*/

    // 4 power of two
    /*check n is a power of two*/
    /*bool isPowerOfTwo(int n) {
        if(n<1)
        return 0;

        int rem,mul=1,ans=0;
        while(n!=1){
            rem=n%2;
            if(rem==1)
            {
                return 0;
            }
            n/=2;

        }
        return 1;
    }
    */

    //5 pallindrome number
    /*Check whether a given number is pallindrome or not*/
    /*bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        int n = x;
        long int ans = 0;
        while(x){
            int rem = x%10;
            x/=10;
            ans = ans*10+rem;
        }
        // if(ans==n){
        //     return 1;
        // }
        // else
        // return 0;
        return (ans==n);
    }*/

    //6 Complement of Base 10 Integer
    // https://leetcode.com/problems/complement-of-base-10-integer/

    // 7 Ugly Number
    // https://leetcode.com/problems/ugly-number/

    // 8 Squares in N*N Chessboard
    // https://www.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Numbers&sortBy=submissions
    return 0;
}