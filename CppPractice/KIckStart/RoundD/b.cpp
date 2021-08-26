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
ll mod = 1e9 + 7;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        ll n, c;
        cin >> n >> c;
        vector<ll> v(10001, 0);
        for (int i = 0; i < n; i++)
        {
            ll l, r;
            cin >> l >> r;
            v[l + 1]++;
            v[r]--;
        }
        priority_queue<ll> q;
        for (int i = 1; i < 10001; i++)
        {
            v[i] += v[i - 1];
            q.push(v[i]);
        }
        ll ans = n;
        while (!q.empty() && c != 0)
        {
            ll temp = q.top();
            q.pop();
            if (temp > 0)
            {
                ans += temp;
                c--;
            }
        }

        cout << "Case #" << t << ": " << ans << "\n";
    }
}