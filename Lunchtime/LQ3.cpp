#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll maxm = -1;
        ll a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxm = max(maxm, a[i]);
        } // to find the max element

        int ans = 0;

        for (ll i = k - 1; i < n; i++)
        {
            if (a[i] == maxm)
            {
                ans += (n - i);
            }
        }
        cout << ans << endl;
    }

    return 0;
}