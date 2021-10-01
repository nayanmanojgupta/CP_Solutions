// problem link :https://www.codechef.com/MAY21B/problems/MODEQ
#include "bits/stdc++.h"
using namespace std;
#define ar array
#define ll long long
#define endl "\n"
const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
#define fastio                        \
ios_base::sync_with_stdio(false); \
cin.tie(NULL)


ll sieve(ll n,ll m)
{
    vector<int>  mod_value(n + 1, 1);
    ll ans=0;
    for (ll i = 2; i <= n; i++)
    {
        ll a = m % i;
        ans += mod_value[a];
        for (ll j = a; j <= n; j += i)
        {
            mod_value[j]++;
        }
    }
    return ans;
}


void solve()
{
    ll n, m;
    cin >> n >> m;
    // approach similar to seive
    cout<<sieve(n,m)<<endl;
    
}

int main()
{	
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        // cout << "Case #" << i  << ": ";
        solve();
    }
    return 0;
}