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
        int n;
        cin >> n;
        int arr[n];
        map<int, vector<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            mp[arr[i]].pb(i);
        }
        ll ans = 0;
        for (auto x : mp)
        {
            vector<int> temp = x.second;
            ll p = 0;
            for (int i = 0; i < temp.size(); i++)
            {

                ans += p * (n - temp[i] + 1);
                p += temp[i];
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
