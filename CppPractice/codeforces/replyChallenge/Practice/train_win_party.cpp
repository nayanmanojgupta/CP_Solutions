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
	for(ll j=1;j<=tc;j++)
	{
            ll n;
            cin>>n;
            ll arr[n];
            fi
              cin>>arr[i];
            ll ans=0;
            for(ll i=0;i<n;i++)
            {
                if(arr[i]>0)
                   ans+=arr[i];

            }
            printf("Case #%lld: %lld\n",j,ans);


	}




	return 0;

}





