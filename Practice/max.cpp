#include <iostream>
using4amespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            if (b > a)
            {
                cout << b << endl;
            }
            else
            {
                cout << a << endl;
            }
        }
    }
}