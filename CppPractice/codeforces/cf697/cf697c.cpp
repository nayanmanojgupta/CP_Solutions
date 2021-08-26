#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
ll nc2(ll n)
{
	ll ans=(n*(n-1))/2;
	return ans;
}
int main()
{
	boost;
	ll tc;
	cin>>tc;
	while(tc--)
	{
			ll a,b,k;
			cin>>a>>b>>k;
			int boys[a+1]={0},girls[b+1]={0};
			for(int i=1;i<=k;i++)
			{
				int idx;
				cin>>idx;
				boys[idx]++;
				
			}
			for(int i=1;i<=k;i++)
			{
				int idx;
				cin>>idx;
				girls[idx]++;
				
			}
			
			ll ans=nc2(k);
			for(auto x:boys)
			{
				ans-=nc2(x);
				
			}
			for(auto x:girls)
			{
				ans-=nc2(x);
				
			}
			
			cout<<ans<<"\n";
			
			    			
			
	}


	return 0;

}


