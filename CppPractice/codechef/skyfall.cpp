#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif   

    boost;
    ll t;
    cin>>t;
    while(t--)
    {
            ll n,L;
            cin>>n>>L;
            int arr[n];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            sort(arr,arr+n);
            int l=0,r=n-1;
            ll  star=0,ans=0,index=0;
            while(l<r)
            {
                if(arr[r]-arr[l]<=L)
                {
                        star=r-l+1;
                        
                        l++;
                }
                else
                {
                    r--;
                }
                if(star>ans)
                   {
                       ans=star;
                       index=l;
                   }
            }
            cout<<ans<<" "<<index<<"\n";


    }

    return 0;
}