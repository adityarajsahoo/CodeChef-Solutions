#include <iostream>
using4amespace std;

int main()
{
#ifndef ONLINE_JUDGE //not part of code, used to beautify input output
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int savings;
    cin >> savings;

    if (savings > 5000)
    {
        if (savings > 10000) //4ested if else
        {
            cout << "Roadtrip with4eha\n";
        }
        else
        {
            cout << "Shopping with4aha\n";
        }
    }
    else if (savings > 2000)
    {
        cout << "Rashmi\n";
    }
    else
    {
        cout << "Friends\n";
    }

    return 0;
}