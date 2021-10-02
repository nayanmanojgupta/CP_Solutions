// Problem Link :  https://www.codechef.com/LTIME95B/problems/BENCHP/

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, j, k, w, minW, x;
        cin >> n >> minW >> w;
        map<ll, ll> mp;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }
        for (auto ele : mp)
        {
            if (ele.second % 2 == 0)
            {
                w += ( (ele.second) * (ele.first));
            }

        }

        if (w >= minW)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
