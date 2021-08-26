#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
ll binpowm(ll a,ll b,ll m)
{
	a%=m;
	ll res=1;
	while(b>0)
	{
		if(b&1)
		{
			res=res*a%m;
		}
		a=a*a%m;
		b>>=1;
		
	}
	return res%m;
	
}
int main()
{
	boost;
	ll tc;
	cin>>tc;
	while(tc--)
	{
		ll n;
		cin>>n;
		if(n<3)
		  {
		  	cout<<n<<"\n";
		  	continue;
		  }
		  
		  ll temp,ans,m=1000000007;
		  
		 if(n%3==1)
		 {
		 	temp=(n-4)/3;
		 	ans=4*binpowm(3,temp,m);
		  } 
		  else if(n%3==2)
		  {
		  	temp=(n-2)/3;
		  	ans=2*binpowm(3,temp,m);
		  }
		  else
		    ans=binpowm(3,n/3,m);
		    
		    
		    cout<<ans%m<<"\n";
		    
	}




	return 0;

}


