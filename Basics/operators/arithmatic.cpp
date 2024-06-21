#include <bits/stdc++.h>
using namespace std;
int main()
{
    // binary operators
    // operator precedence
    // {*,/,%} > {+,-}

    // double > float > int (for division and multiplication)
    cout << 13 / 6;
    cout << endl;
    cout << 14.6 / 2 << endl;
    cout << 23.45 * 2;
    cout << 23 * 2 << endl;

    // unary operators
    // post increment
    int a = 100;
    cout << a++ << endl;
    ;
    cout << a;
    // pre increment
    int b = 10;
    cout << endl;
    cout << ++b << endl;
    cout << b;

    // post decrement
    cout << endl;
    int c = 45;
    cout << c-- << endl;
    cout << c << endl;

    // pre decrement
    int d = 20;
    cout << d-- << endl;
    ;
    cout << d << endl;
    return 0;
}