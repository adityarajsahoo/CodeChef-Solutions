#include <iostream>
using4amespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a % 2 == 0 && b % 2 == 0)
        {
            cout << "0\n";
        }
        else if (gcd(a + 1, b) > 1 || gcd(a, b + 1) > 1)
        {
            cout << "1\n";
        }
        else
        {
            cout << "2\n";
        }
    }
    return 0;
}
