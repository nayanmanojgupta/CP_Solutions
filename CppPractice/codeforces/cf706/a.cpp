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
            ll n,k;
            cin>>n>>k;
            string str;
            cin>>str;
            string temp,temp2;
            // if(k==0)
            // {
            //     cout<<"YES\n";
            //     continue;

            // }

            temp=str.substr(0,k);
            temp2=str.substr(n-k,k);
            reverse(temp2.begin(),temp2.end());
            if(temp==temp2 && (2*k)+1<=n )
               cout<<"YES\n";
            else
               cout<<"NO\n";   
            // cout<<temp<<"\n";
            // cout<<temp2<<"\n";


          

	}




	return 0;

}





