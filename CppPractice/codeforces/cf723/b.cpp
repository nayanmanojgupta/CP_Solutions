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
        ll x;
        cin>>x;
        ll a,b;
        b=x%11;
        a=x-b*111;
        if(a>=0 && a%11==0)
        {
            cout<<"YES\n";

        }
        else
        {
            cout<<"NO\n";
            
        }

    }

    return 0;
}
