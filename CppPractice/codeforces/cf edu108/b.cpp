#include<bits/stdc++.h> 
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)   
#define ll long long 
#define fi for(ll i=0;i<n;i++)
#define pb push_back
#define countsetbit __builtin_popcount
 
using namespace std;
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
        ll n,m,k;
        cin>>n>>m>>k;
        ll a=m-1,d=m;
        ll ans=a+(n-1)*d;
        if(ans==k)
           cout<<"YES\n";
        else
           cout<<"NO\n";
              

         
	}




	return 0;

}







