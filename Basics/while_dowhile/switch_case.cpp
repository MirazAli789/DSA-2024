#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    cout << "Enter i\n";
    cin >> i;
    switch (i)
    {
    case 1:
        cout << "Ronaldo\n";
        break;
    case 2:
        cout << "Mbappe";
        break;
    case 3:
        cout << "Neymar Jr";
        break;
    default:
        cout << "Haaland\n";
        break;
    }
    cout << endl;
    int n;
    cout << "Enter n\n";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednessday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Enter valid date";
        break;
    }
    return 0;
}