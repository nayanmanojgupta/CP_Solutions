#include<bits/stdc++.h>
#include<string>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
int check(string s,string t)
{
	ll n=s.length(),m=t.length();
	for(ll i=0;i<m;i+=n)
	{
		 if(t.substr(i,n)!=s)
		    return 0;
	}
	return 1;
}
int main()
{
	boost;
	ll tc;
	cin>>tc;
	while(tc--)
	{
		string s,t;
		cin>>s>>t;
		ll n=s.length(),m=t.length();
		ll LCM=(n*m)/(__gcd(n,m));
		ll len=LCM;
		string ans;
		for(ll i=0;i<len;i+=m)
		{
			ans+=t;
		}
		if(check(s,ans))
		{
			cout<<ans<<"\n";
		}
		else
		{
			cout<<"-1\n";
		}
		
		
		
	}




	return 0;

}


