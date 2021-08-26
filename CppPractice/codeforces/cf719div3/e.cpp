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
        string s;
        cin >> s;
        int prefix[n + 1] = {0};
        // the idea is to check for number of stars in left and right
        // and which side has minimum number of stars , shift them towards empty position.....
        for (int i = 1; i <= n; i++)
        {
            prefix[i] += prefix[i - 1] + (s[i - 1] == '*' ? 1 : 0);
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
                continue;
            ans += min(prefix[i], prefix[n] - prefix[i]);
        }
        cout << ans << "\n";
    }

    return 0;
}
