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
			string b;
			cin>>b;
			ll prev=b[0]-'0'+1;
			cout<<"1";
			for(ll i=1;i<n;i++)
			{
				if(b[i]-'0'+1!=prev)
				  {
				  	cout<<"1";
				  	prev=b[i]-'0'+1;
				  	
				  }
				  else
				  {
				  	cout<<"0";
				  	prev=b[i]-'0';
				  }
			}
			cout<<"\n";
			
	}




	return 0;

}


