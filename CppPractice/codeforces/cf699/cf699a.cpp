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
		ll a,b;
		cin>>a>>b;
		string s;
		cin>>s;
		int u=0,d=0,l=0,r=0;
		if(a<0)
		{
			l=abs(a);
			
		}
		else if(a>=0)
		{
			r=a;
		}
		if(b<0)
		{
			d=abs(b);
		}
		else if(b>=0)
		{
			u=b;
		}
		int ua=0,ra=00,la=0,da=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='U')
			   ua++;
			else if(s[i]=='R')
			   ra++;
			else if(s[i]=='L')
			   la++;
			else if(s[i]=='D')
			   da++;
			  
		}
//		cout<<la<<"\n";
//		cout<<l<<"\n";
		if(ua>=u && da>=d && ra>=r && la>=l)
		  cout<<"YES\n";
		else
		   cout<<"NO\n";  
		
	}




	return 0;

}


