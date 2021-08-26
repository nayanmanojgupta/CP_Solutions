#include<bits/stdc++.h> 
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)   
#define ll long long 
#define fi for(ll i=0;i<n;i++)
#define pb push_back
#define countsetbit __builtin_popcount
 
using namespace std;
string getBinary(ll num){string s="";while(num!=0){ if(num%2==0){s+="0";}else{s+="1";}num>>=1;}reverse(s.begin(),s.end());return s;}
int num(ll a,ll b)
{
    ll count=0;
    if(b==1)
      return INT_MAX;

     while(a!=0)
     {
        a/=b;
        count++;

        if(a==b)
        {
          count+=2;
          break;

        }

        
     } 
     return count;


}
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
       ll a,b;
       cin>>a>>b;
       ll count=INT_MAX;
       for(ll i=0;i<30;i++)
       {
         count=min(count,i+num(a,b+i));

       }
       cout<<count<<"\n";



	}




	return 0;

}





