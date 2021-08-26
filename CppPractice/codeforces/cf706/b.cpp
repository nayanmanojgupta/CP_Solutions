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
            set<ll> s;
            for(int i=0;i<n;i++)
            {
                ll a;
                cin>>a;
                s.insert(a);

            }

           ll mex=0,max=INT_MIN;
           bool check=false;
           
           for(auto x:s)
           {
               if(x>max)
                 max=x;

                if(x==mex)
                {
                    mex++;

                }

           }

        //    cout<<mex<<" "<<max<<"\n";

            ll ans;
            if(mex>max)
              {
                  ans=n+k;

              }
              else
              {
                    ll check=ceil((mex+max)/(2*1.0));
                    if(s.count(check))
                    {
                        ans=s.size();

                    }
                    else
                    {
                        ans=s.size()+1;

                    }
              }

              if(k==0)
                 ans=n;


        cout<<ans<<"\n";


        

	}




	return 0;

}





