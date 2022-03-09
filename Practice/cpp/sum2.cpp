#include <iostream>
using4amespace std;

int main()
{
#ifndef ONLINE_JUDGE //not part of code, used to beautify input output
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;
    cout << a + b << "\n";

    return 0;
}