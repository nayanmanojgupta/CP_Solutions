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
            vector<ll> v;
            if(k%2==0)
            {
                for(int i=k/2;i<=n;i++)
                   {
                       if(i!=k)
                            v.pb(i);

                   }
            }
            else
            {
                     for(int i=(k/2)+1;i<=n;i++)
                   {
                       if(i!=k)
                          v.pb(i);

                   }
            }

            cout<<v.size()<<"\n";
            for(auto x:v)
                cout<<x<<" ";
                cout<<"\n";



	}




	return 0;

}





