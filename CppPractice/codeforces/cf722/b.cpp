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
        ll arr[n];
        vector<ll> zeros, neg, pos;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > 0)
                pos.pb(arr[i]);
            else if (arr[i] < 0)
                neg.pb(arr[i] * (-1));
            else if (arr[i] == 0)
                zeros.pb(arr[i]);
        }
        ll ans = 0;

        ans += (zeros.size() + neg.size());
        if (zeros.size() <= 1)
        {
            ll mine = INT_MAX;
            sort(neg.begin(), neg.end());
            for (int i = 1; i < neg.size(); i++)
            {
                mine = min(mine, abs(neg[i] - neg[i - 1]));
            }
            for (auto x : pos)
            {
                if (x <= mine)
                {
                    ans++;
                    break;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
