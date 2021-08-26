#include <bits/stdc++.h>
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long

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
        cin>>n;
        vector<ll> v;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);

        
        }
        sort(v.begin(),v.end());
        ll ans=INT_MAX;
        for(int i=1;i<n;i++)
        {
            ans=min(v[i]-v[i-1],ans);

        }
        cout<<ans<<'\n';
        
    }

    return 0;
}
