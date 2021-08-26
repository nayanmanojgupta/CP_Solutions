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
            ll n;
            cin>>n;
            vector<ll> x,y;
            for(int i=0;i<2*n;i++)
            {
                ll a,b;
                cin>>a>>b;
                if(a==0)
                {
                    y.pb(abs(b));

                }
                else
                {
                    x.pb(abs(a));

                }

            }
            sort(x.begin(),x.end());
            sort(y.begin(),y.end());

            double ans=0;
            for(int i=0;i<n;i++)
            {
                ans+=pow((x[i]*x[i]*1.0+y[i]*y[i]*1.0),0.5);


            }

            cout<<setprecision(30)<<ans<<"\n";


	}




	return 0;

}





