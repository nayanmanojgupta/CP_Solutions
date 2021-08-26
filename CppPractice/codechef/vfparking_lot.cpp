#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define fj for(ll j=0;j<;j++)
#define pb push_back
ll powe(ll a,ll b)
{
	if(b==0)
	   return 1;
	ll res=powe(a,b/2);
	if(b&1)
	{
		res=res*res*a;
	   }   
	   else
	   {
	   	res=res*res;
	   }
	   
	 return res;  
}
using namespace std;
int main()
{
	boost;
//	ll tc;
//	cin>>tc;
//	while(tc--)
//	{
//				
//	}

		ll n;
		cin>>n;
		ll comb1=2*4*3*powe(4,n-3);
		ll comb2=(n-3)*4*3*3*powe(4,n-4);
		ll ans=comb1+comb2;
		cout<<ans<<"\n";
		




	return 0;

}


