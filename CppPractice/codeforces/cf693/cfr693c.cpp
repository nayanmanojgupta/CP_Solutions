#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
int main()
{
	boost;
	ll n,m;
	cin>>n>>m;
	ll a[n],b[m],g=0;
	fi
	 cin>>a[i];
	for(ll i=0;i<m;i++)
	    cin>>b[i]; 
	for(ll i=1;i<n;i++)
	{
		g=__gcd(g,abs(a[i]-a[0]));
	} 
	for(ll i=0;i<m;i++)
	    cout<<__gcd(g,a[0]+b[i])<<" ";
		   




	return 0;

}


