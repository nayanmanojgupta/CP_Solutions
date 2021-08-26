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
		unordered_set<string> st;
		for(ll i=0;i<n;i++)
		{
			string s;
			cin>>s;
			st.insert(s);
			
			
		}
		ll ans=0;
		for(auto x:st)
		{
			for(auto y:st)
			{
					
				char ch1,ch2;
				ch1=x[0];
				ch2=y[0];
				string str1,str2;
				str1=ch2+x.substr(1);
				str2=ch1+y.substr(1);
				if(st.count(str1)==0 && st.count(str2)==0)
				   ans+=1;
				
				
			}
		}
		
		cout<<ans<<'\n';
	}



	return 0;

}


