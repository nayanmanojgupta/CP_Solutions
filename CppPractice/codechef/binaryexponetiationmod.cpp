#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
ll bexpm(ll a,ll b,ll m)
{
	if(b==0)
	   return 1;
	ll res=bexpm(a,b/2,m);
	res=res%m;
	if(b&1)
	{
		res=res*res*(a%m);
	   }   
	   else
	   {
	   	res=res*res;
	   }
	   
	 return res%m;  
}
using namespace std;
int main()
{
//	boost;
//	ll tc;
//	cin>>tc;
//	while(tc--)
//	{
//
//	}

		ll n;
		cout<<"Enter n: ";
		cin>>n;
		ll ans=bexpm(2,n,100);
		ll temp=pow(2,n);
		cout<<ans<<"\n";
		cout<<temp<<"\n";
		
		


	return 0;

}


