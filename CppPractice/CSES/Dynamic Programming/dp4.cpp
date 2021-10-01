#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
ll solve(ll *v,ll n,ll w)
{
    int dp[n+1][w+1];
    ll mod=1e9+7;
    for(int i=1;i<=n;i++)
        dp[i][0]=1;
     for(int i=0;i<=w;i++)
     dp[0][i]=0;

     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=w;j++)
         {
             if(v[i-1]<=j)
             {
                 dp[i][j]=(dp[i][j-v[i-1]]%mod+dp[i-1][j]%mod)%mod;
                
             }
             else
               dp[i][j]=dp[i-1][j]%mod;
         }
     }  
    
     return dp[n][w]%mod;


  

}
using namespace std;
int main()
{
	boost;
	#ifndef ONLINE_JUDGE
    		freopen("input.txt","r",stdin);
    		freopen("output.txt","w",stdout);
       #endif
	ll n,x;
    cin>>n>>x;
    ll v[n];
    ll a;
    for(int i=0;i<n;i++)
       cin>>v[i];

    cout<<solve(v,n,x);   




	return 0;

}

