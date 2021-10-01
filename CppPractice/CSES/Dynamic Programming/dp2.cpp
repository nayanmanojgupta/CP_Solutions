#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
void solve(vector<int> v,int n,int w)
{
    int dp[n+1][w+1];
   
    for(int i=0;i<=w;i++)
       dp[0][i]=INT_MAX-1;
    for(int i=1;i<=n;i++)
       dp[i][0]=0;

       for(int j=1;j<=w;j++)
       {
           if(j%v[0]==0)
           {
               dp[1][j]=j/v[0];
           }
           else
           {
               dp[1][j]=INT_MAX-1;
           }
       }

    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(v[i-1]<=j)
            {
                dp[i][j]=min(1+dp[i][j-v[i-1]],dp[i-1][j]);

            }
            else
              dp[i][j]=dp[i-1][j];
        }
    }
    if(dp[n][w]==INT_MAX-1)
        cout<<-1;
     else
        cout<<dp[n][w];





}
int main()
{
	boost;
 	#ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
        #endif
    ll n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
    solve(v,n,x);    




	return 0;

}

