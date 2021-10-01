
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
	ll n,w;
    cin>>n>>w;
    int wt[n],val[n];
    fi
    {
        cin>>wt[i];

    }
    fi{
        cin>>val[i];

    }
    int dp[n+1][w+1];
    for(int i=0;i<=n;i++)
        dp[i][0]=0;
    for(int j=0;j<=w;j++) 
        dp[0][j]=0;

     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=w;j++)
         {
             if(wt[i-1]<=j)
             {
                dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
             }
             else
             {
                 dp[i][j]=dp[i-1][j];

             }
             
         }
     }   

    cout<<dp[n][w]<<"\n";
    




	return 0;

}

