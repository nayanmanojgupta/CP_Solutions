#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
int main()
{
	boost;
	ll n,sum=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=i+1;
		sum+=arr[i];
	}
	if(sum%2!=0)
	{
		cout<<"0\n";
		return 0;
	}
	sum/=2;
	int dp[n+1][sum+1];
	for(int i=0;i<=sum;i++)
		dp[0][i]=0;
	for(int i=0;i<n;i++)
		dp[i][0]=1;
	int mod=1e9+7;	
	// iterating about n-1 only because of we want two subset
	// if dp[n][i] line is there it means that sum i could be achieved 
	// when n elements are there , it means that there is only one subset of that
	// sum not two!! 
	for(int i=1;i<n;i++)	
	{
		for(int j=1;j<=sum;j++)
		{
			if(arr[i-1]<=j)
			{
				dp[i][j]=(dp[i-1][j-arr[i-1]]%mod+dp[i-1][j]%mod)%mod;
				
			}
			else	
				dp[i][j]=dp[i-1][j]%mod;	
		}
	}	
		cout<<(dp[n-1][sum])%mod<<"\n";
		
			   




	return 0;

}


