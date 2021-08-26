#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll x,y,xy;
		xy=n/2020;
		y=n%2020;
		x=xy-y;
		if(x<0)
		   cout<<"NO\n";
		else 
		cout<<"YES\n";
		   
		
	}
	return 0;
	
}
