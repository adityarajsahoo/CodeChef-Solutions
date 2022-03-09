#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        if (n == 3)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == n / 2 && j == n / 2)
                    {
                        cout << "Q";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                cout << "\n";
            }
        }
        else
        {
            int x = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == n - 2 && j == 1)
                    {
                        cout << "Q";
                    }
                    else if (j == n - 1 - i)
                    {
                        if (i >= n - 3)
                        {
                            cout << ".";
                        }
                        else
                        {
                            cout << "Q";
                        }
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                cout << "\n";
            }
            return 0;
        }
    }
}
