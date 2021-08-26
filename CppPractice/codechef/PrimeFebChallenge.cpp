#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
int arr[1000001];
void seive(int n)
{

	bool prime[n+1]={0};
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i]==0)
		{
			for(int j=i*i;j<=n;j+=i)
			{
					prime[j]=1;
			}
		}
		
	}

	ll ans=0;
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==0)
		{
			ans+=1;
			arr[i]=ans;
		}
		else
		arr[i]=ans;

	}
//	cout<<arr[1000000]<<"\n";
	
	
	
}
int main()
{
	boost;
	ll tc;
	cin>>tc;
	seive(1000000);
	
	while(tc--)
	{
			ll x,y;
			cin>>x>>y;
			if(x==1)
			   cout<<"Chef\n";
			else
			{
					ll check=arr[x];
					if(check>y)
					   cout<<"Divyam\n";
					else if(check<=y)
					    cout<<"Chef\n";
						   	
			   }   
						
	}




	return 0;

}


