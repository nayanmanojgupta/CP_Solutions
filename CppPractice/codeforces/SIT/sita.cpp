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
			ll x,y;
			cin>>x>>y;
			ll pos1=(x-1)*20;
			ll pos2=((y-1)*5)+((x-1)*5);
			ll pos3=INT_MAX;
			if(x>y)
			{
				pos3=((y-1)*20)+((x-y)*5);
			}
			ll ans=min(pos1,pos3);
			cout<<min(ans,pos2)<<"\n";
			
			
	}




	return 0;

}


