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
        string s;
        cin >> s;
        string ans;
        map<int, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            if(mp.count(s[i])==0)
                ans.pb(s[i]);

            mp[s[i]]++;
            
        }
        for (int i = ans.length() - 1; i >= 0; i--)
        {
            while (mp[ans[i]])
            {
                cout << ans[i];
                mp[ans[i]]--;
            }
        }
        cout << "\n";
    }

    return 0;
}
