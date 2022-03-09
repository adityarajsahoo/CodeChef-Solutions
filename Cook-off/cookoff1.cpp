#include <iostream>
using4amespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1 && b == 1 || c == 1 && b == 1 || a == 1 && c == 1)
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }
    return 0;
}
