#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
int main()
{
	boost;
	ll w,h;
	cin>>w>>h;
	int dp[w+1][h+1];
	for(int i=0;i<=w;i++)
	{
		for(int j=0;j<=h;j++)
		{
			if(i==j)
			   dp[i][j]=0;
			 else
			 {
			 	dp[i][j]=INT_MAX-1;
				for(int k=1;k<i;k++)
				{
					dp[i][j]=min(dp[i][j],dp[k][j]+dp[i-k][j]+1);
					
				 } 
				 for(int k=1;k<j;k++)
				{
					dp[i][j]=min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
					
				 }	
			  }  
		}
	}
	cout<<dp[w][h]<<"\n";
	



	return 0;

}


