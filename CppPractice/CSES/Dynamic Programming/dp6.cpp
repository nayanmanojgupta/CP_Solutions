
#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define fj for(ll j=0;j<n;j++)
#define pb push_back
using namespace std;
int main()
{
	boost;
 	#ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
        #endif
	ll n;
    cin>>n;
    char arr[n][n];
    fi
        fj
            {
                    cin>>arr[i][j];
            }
    int dp[n][n];
    memset(dp,0,sizeof(dp));

    for(int i=0;i<n;i++)
    {
        if(arr[i][0]=='*')
        {
            break;
        }
        dp[i][0]=1;
    }
       
    for(int j=0;j<n;j++)
    {
        if(arr[0][j]=='*')
        {
            break;
        }
        dp[0][j]=1;
    }
       
    ll mod=1e9+7;
      for(int i=1;i<n;i++)
      {
          for(int j=1;j<n;j++)
          {
                if(arr[i][j]=='*')
                   dp[i][j]=0;
                else   
                dp[i][j]=(dp[i][j-1]%mod+dp[i-1][j]%mod)%mod;

          }
      }    

    cout<<dp[n-1][n-1]%mod;

	return 0;

}

