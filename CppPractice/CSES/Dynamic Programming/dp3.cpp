#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back

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
   int  arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

     int dp[x+1]={0};
     dp[0]=1;
    int mod=1e9+7;
     for(int i=1;i<=x;i++)
     {
         for(int j=0;j<n;j++)
         {
             if(i-arr[j]>=0)
             {
                 dp[i]+=dp[i-arr[j]];
                 dp[i]%=mod;


             }
         }
     }

     cout<<dp[x];






	return 0;

}

