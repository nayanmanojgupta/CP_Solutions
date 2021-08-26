#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
int main()
{
	boost;
	ll tc;
	cin>>tc;
	while(tc--)
	{
			ll n;
			cin>>n;
			ll arr[n];
			ll count=0,total=0,ans=0;
			for(ll i=1;i<=n;i++)
			{
				cin>>arr[i];
				
			}
			for(ll i=2;i<=n-1;i++)
			{
				if( (arr[i]>arr[i-1] && arr[i]>arr[i+1]) || (arr[i]<arr[i-1] && arr[i]<arr[i+1]) )
				   {
				   	total++;
				   	count++;
				   }
				else 
				{
					count=0;
				}
				  
				  
				  ans=max(count,ans);
				   
				   
				      
			}
			
			
			ll final;
			if(ans>=3)
			   {
			   	final=total-3;
			   	cout<<final<<"\n";
			   	continue;
			   	
			   }
			   
			final=total-ans;
			 cout<<final<<"\n";
			 
			
			
	}




	return 0;

}


