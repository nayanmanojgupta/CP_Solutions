#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl "\n"

void solve()
{
    ll n;
    cin >> n;
    ll t = n * (n + 1) / 2;
    if (t % 2 == 1)
        cout << "NO";
    else
    {
        cout << "YES\n";
        vector<ll> v1, v2;

        for (ll i = 1; i <= n / 4; i++)
        {
            v1.push_back(i);
            v1.push_back(n - i + 1);
        }
        if (n % 2 == 1)
            v1.push_back(n - n / 4);
        for (ll i = (n / 2) / 2 + 1; i < n - n / 4; i++)
        {
            v2.push_back(i);
        }
        if (n % 2 == 0)
            v2.push_back(n - n / 4);

        // alternate solution: replace the commented code with the code from line no. 23 to 35

        // t /= 2LL;
        // while (n)
        // {
        //     if (t - n >= 0)
        //     {
        //         v1.push_back(n);
        //         t -= n;
        //     }
        //     else
        //     {
        //         v2.push_back(n);
        //     }
        //     n--;
        // }

        cout << v1.size() << endl;
        for (ll x : v1)
            cout << x << " ";
        cout << endl
             << v2.size() << endl;
        for (ll x : v2)
            cout << x << " ";
    }
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;

    //Code starts from here //
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    // Code end here //
    return 0;
}