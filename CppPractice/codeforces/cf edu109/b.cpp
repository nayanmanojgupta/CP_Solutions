#include <bits/stdc++.h>
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long
#define fi for (ll i = 0; i < n; i++)
#define pb push_back
#define countsetbit __builtin_popcount

using namespace std;
int main()
{
    boost;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        if (arr[1] == n && arr[n] == 1)
        {
            cout << "3\n";
            continue;
        }
        if (arr[1] != 1 && arr[n] != n)
        {
            cout << "2\n";
            continue;
        }
        if (arr[1] == 1 && arr[n] != n || arr[1] != 1 && arr[n] == n)
        {
            cout << "1\n";
            continue;
        }
        bool check = false;
        for (ll i = 1; i <= n; i++)
        {
            if (arr[i] != i)
            {
                check = true;
                break;
            }
        }
        if (check)
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
