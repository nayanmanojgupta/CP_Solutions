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
        ll a, b, c, d, e, f, g, h;
        cin >> a >> b >> c >> d >> e >> f >> g >> h;
        ll ans = 0;
        if (((a + c)) == 2 * b)
            ans++;
        if (((f + h)) == 2 * g)
            ans++;
        if (((a + f)) == 2 * d)
            ans++;
        if (((h + c)) == 2 * e)
            ans++;

        vector<int> temp;
        temp.pb(a + h);
        temp.pb(d + e);
        temp.pb(f + c);
        temp.pb(b + g);

        sort(temp.begin(), temp.end());
        ll temp2;
        if (temp[0] % 2 == 0)
            temp2 = 1;
        else
            temp2 = 0;
        ll temp3 = temp2;

        for (int i = 1; i < 4; i++)
        {
            if (temp[i] == temp[i - 1] && temp[i] % 2 == 0)
                temp2++;
            else if (temp[i] % 2 == 0)
                temp2 = 1;
            else if (temp[i] % 2 != 0)
                temp2 = 0;

            temp3 = max(temp3, temp2);
        }
        ans += temp3;

        cout << "Case #" << t << ": " << ans << "\n";
    }
}

