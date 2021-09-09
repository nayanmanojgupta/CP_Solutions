#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll mod = 998244353;
ll findFact(ll n)
{
    return n == 1 ? 1 : n * findFact(n - 1);
}

ll permute(ll n, ll r)
{
    return findFact(n) / findFact(n - r);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, j, k;
        cin >> n;
        vector<ll> v(n);
        for (i = 0; i < n; i++)
            cin >> v[i];
        ll maxV = INT_MIN, max2 = INT_MIN, max2Count = 0;
        for (i = 0; i < n; i++)
        {
            if (v[i] > maxV)
            {
                max2 = maxV;
                maxV = v[i];
            }
            else if (v[i] == maxV)
                max2 = maxV;
            else if (v[i] > max2)
                max2 = v[i];
        }

        //if diff is 0
        if (maxV == max2)
        {
            cout << (findFact(n)) % mod << endl;
            continue;
        }

        // count of last second max value
        for (i = 0; i < n; i++)
        {
            if (v[i] == max2)
                max2Count++;
        }

        ll maxPermu = 0;
        for (i = 1; i <= max2Count; i++)
        {
            maxPermu += permute(max2Count, i) * permute(max2Count, max2Count - i);
        }

        cout << (maxPermu * (findFact(n)) / (max2Count + 1)) % mod << endl;
    }
    return 0;
}