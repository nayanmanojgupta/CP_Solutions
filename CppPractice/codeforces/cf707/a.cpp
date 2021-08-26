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
        vector<ll> a(n+1,0),b(n+1,0),tm(n+1,0),dep(n+1,0),arr(n+1,0);
        ll ans=0;
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            cin>>b[i];

        }
        for(ll i=1;i<=n;i++)
            cin>>tm[i];

        for(ll i=1;i<=n;i++)
            {
                arr[i]=a[i]-b[i-1]+dep[i-1]+tm[i];
                dep[i]=max(b[i],arr[i]+(b[i]-a[i]+1)/2);


            }   

            cout<<arr[n]<<"\n";



    }
	

	



	return 0;

}





