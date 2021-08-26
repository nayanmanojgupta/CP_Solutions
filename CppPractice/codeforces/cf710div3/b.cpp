#include<bits/stdc++.h> 
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)   
#define ll long long 
#define fi for(ll i=0;i<n;i++)
#define pb push_back
#define countsetbit __builtin_popcount
 
using namespace std;
string getBinary(ll num){string s="";while(num!=0){ if(num%2==0){s+="0";}else{s+="1";}num>>=1;}reverse(s.begin(),s.end());return s;}
int main()
{
	boost;
 	#ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
        #endif
	ll tc;
	cin>>tc;
	while(tc--)
	{
          ll n,k;
		  cin>>n>>k;
		  string s;
		  cin>>s;
		  ll start=0;
		  for(int i=0;i<n;i++)
		  {
			  if(s[i]=='*')
			  {
				  start=i;
				  break;

			  }
		  }
		  ll ans=1;
		while(true)
		{
			int j;
			for( j=min(n-1,start+k);j>start && s[j]=='.';j--)
			{

			}
			if(start==j)
			{
				break;

			}
			ans++;
			start=j;



		}

		cout<<ans<<"\n";


	}




	return 0;

}





