#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
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
            ll p,a,b,c;
            cin>>p>>a>>b>>c;
            ll op1,op2,op3;
            op1=(a-p%a)%a;
            op2=(b-p%b)%b;
            op3=(c-p%c)%c;
            
            ll ans=min(op1,op2);
            ans=min(ans,op3);
            
            cout<<ans<<"\n";

            

         

	}




	return 0;

}





