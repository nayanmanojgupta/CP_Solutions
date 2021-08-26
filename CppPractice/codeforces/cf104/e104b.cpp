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
			ll n,k;
			cin>>n>>k;
			ll a=(n-1)/2;
			ll b=k%n;
			ll c;
			if(a!=0)
			{
				c=(k-1)/a;	
			}
			else
			{
				c=0;
			}
			ll ans;
			if(b==0 && c==0)
			   ans=n;			
			else
			    ans=c+b;
			    
			cout<<ans<<"\n";
			
	}




	return 0;

}


