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
		string s;
		cin>>s;
		int freq[27]={0};
		for(int i=0;i<s.length();i++)
		{
			freq[s[i]-'a']++;
			
		}
		
		ll even=0,odd=0;
		for(int i=0;i<27;i++)
		{
			even+=freq[i]/2;
			odd+=freq[i]%2;
			
			       
			    	    
		}
		
		if( even>=odd )
		   cout<<"YES\n";
		else
		   cout<<"NO\n";
		      
	}




	return 0;

}


