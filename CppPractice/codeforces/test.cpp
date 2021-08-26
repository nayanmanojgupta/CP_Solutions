#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
int main()
{
	boost;
  	ll t;
  	cin>>t;
  	while(t--)
  	{
  		ll n,k;
  		cin>>n>>k;
  		while(k<n)
		  {
		  	   k*=2;
			  }	
		  
  		     
		ll ans=k/n;
		ll check=k%n;
		if(check!=0)
		{
			ans+=1;
		}
		cout<<ans<<"\n";
		
		
  		
	  }
    

	return 0;

}

