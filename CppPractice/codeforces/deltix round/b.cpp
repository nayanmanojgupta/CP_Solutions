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
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        ll ans = 3 * n;
        cout << ans << "\n";
        for (int i = 1; i < n; i += 2)
        {
            cout << "1 " << i << " " << i + 1 << "\n";
            cout << "2 " << i << " " << i + 1 << "\n";
            cout << "1 " << i << " " << i + 1 << "\n";
            cout << "2 " << i << " " << i + 1 << "\n";
            cout << "1 " << i << " " << i + 1 << "\n";
            cout << "2 " << i << " " << i + 1 << "\n";
        }
    }

    return 0;
}
