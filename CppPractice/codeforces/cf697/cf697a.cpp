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
		ll ans=n&(n-1);
		if(ans==0)
		   cout<<"NO\n";
		else
		    cout<<"YES\n";
			   
		
	}




	return 0;

}


