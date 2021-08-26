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
		ll bc=0,rc=0;
		string r,b;
		cin>>r>>b;
		
		
		for(ll i=0;i<n;i++)
		{
			if(b[i]>r[i])
			   bc++;
			else if(r[i]>b[i])
			   rc++;
			      
		}
		
		if(bc>rc)
		   cout<<"BLUE\n";
		else if(bc<rc)
		   cout<<"RED\n";
		else
		  cout<<"EQUAL\n";      
		   
		
		
	}




	return 0;

}


