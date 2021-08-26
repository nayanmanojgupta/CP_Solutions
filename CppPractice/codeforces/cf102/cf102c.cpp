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
			for(ll i=1;i<(2*k-n);i++)
			   cout<<i<<" ";
			for(ll i=k;i>=(2*k-n);i--)
			   cout<<i<<" ";
			   
			   cout<<"\n";
			   
			   
	}




	return 0;

}


