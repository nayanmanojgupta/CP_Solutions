#include<bits/stdc++.h>
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
int main()
{
	// boost;
 	#ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
        #endif
	ll tc;
	cin>>tc;
	for(ll j=1;j<=tc;j++)
	{
            ll n,k;
            cin>>n>>k;
            int pos[n],finalpos[n],temp[n],temp2[n];


            for(int i=0;i<n;i++)
            {
                cin>>pos[i];
                temp[i]=i;
                

            }
            while(k--)
            {
                for(int i=0;i<n;i++)
                     temp2[i]=temp[i];

                for(int i=0;i<n;i++)
                {
                    finalpos[i]=temp2[i];
                    temp[pos[i]]=finalpos[i];

                }
            }

            printf("Case #%lld: ",j);
            for(int i=0;i<n;i++)
                cout<<temp[i]<<" ";

                cout<<"\n";
                





	}




	return 0;

}





