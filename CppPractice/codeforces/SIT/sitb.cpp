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
      	ll x1,y1,x2,y2,x3,y3;
       	cin>>x1>>y1>>x2>>y2>>x3>>y3;
       	ll x,y;
		   if(x1==x2)
       	x=x3;
       	else if(x2==x3)
       	x=x1;
       	else if(x1==x3)
       	x=x2;
       	if(y1==y2)
       	y=y3;
       	else if(y2==y3)
       	y=y1;
       	else if(y1==y3)
       	y=y2;
       	
       	cout<<x<<" "<<y<<'\n';
       	
 		
		       
		
		
	    
      	
	}




	return 0;

}


