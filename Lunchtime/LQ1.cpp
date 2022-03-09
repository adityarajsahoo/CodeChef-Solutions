#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
        }
        pair<int, int> v;
        v.first = arr[0];
        v.second = arr[1];

        pair<int, int> v1;
        v1.first = arr[2];
        v1.second = arr[3];

        pair<int, int> v2;
        v2.first = arr[4];
        v2.second = arr[5];

        if (v == v1 || v.first == v1.second && v.second == v1.first)
        {
            cout << "1" << endl;
        }
        else if (v == v2 || v.first == v2.second && v.second == v2.first)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}