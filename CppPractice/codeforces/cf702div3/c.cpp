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
    ll n=1000000000000;
    set<ll> cubes;
    for(ll i=1;i*i*i<=n;i++)
    {
        cubes.insert(i*i*i);

    }

	while(tc--)
	{
         ll x;
         cin>>x;
         bool check=false;
         for(ll i=1;i*i*i<=x;i++)
         {
             if(cubes.count(x-i*i*i))
             {
                 cout<<"YES\n";
                 check=true;
                 break;
                 

             }
             
         } 
         if(!check)
             cout<<"NO\n";

	}




	return 0;

}





