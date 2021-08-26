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

ll arr[2000];
ll dp[2000][2000];
ll solve(ll l,ll r)
{
	if(l==r)
	   return 0;
	if(dp[l][r]!=-1)
	   return dp[l][r];
	   
	return dp[l][r]=(arr[r]-arr[l]+min(solve(l+1,r),solve(l,r-1)) );
	    
}

int main()
{
    boost;
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif

    ll n;
    cin>>n;
    
    fi
      cin>>arr[i];
    sort(arr,arr+n);
    memset(dp,-1,sizeof(dp));
    cout<<solve(0,n-1);
    
    



    return 0;
}
