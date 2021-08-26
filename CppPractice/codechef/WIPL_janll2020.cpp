#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
ll minSubsetDifference(vector<ll> v, ll n )
{
   
    ll sum=0; 
    	fi	
        sum+=v[i];
 
    bool t[n+1][sum+1];
 
    for(ll i = 0; i <= n; i++)
        t[i][0] = true;
 

    for(ll i = 1; i <= sum; i++)
        t[0][i] = false;
 

    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=sum;j++)
        {
          
            t[i][j] = t[i-1][j];

            if (v[i-1] <= j)
                t[i][j] |= t[i-1][j-v[i-1]];
        }
    }
  

    ll difference=INT_MAX;

    for (ll j=sum/2; j>=0; j--)
    {
        
        if (t[n][j] == true)
        {
            difference = sum-(2*j);
            break;
        }
    }
    return difference;
}
 
int main()
{
	boost;
	ll tc;
	cin>>tc;
	while(tc--)
	{
			ll n,k;
			cin>>n>>k;
			ll arr[n],sum=0;
			vector<ll> v;
			fi
			{
				cin>>arr[i];
			}
			sort(arr,arr+n,greater<ll> () );
			ll i;
			for(i=0;i<n;i++)
			{
				if(sum<(2*k))
				{
					sum+=arr[i];
					v.pb(arr[i]);
				}
				else
				{
				
					break;
					
				}
			}
			
			ll difference=minSubsetDifference(v,v.size());
			ll check=((sum-difference)/2);
			if(check>=k)
			   {
			   	   cout<<v.size()<<"\n";
			   	   continue;
			   }
			 bool is=false;  
			for(ll j=i;i<n;i++)
			{
				   sum+=arr[j];
				   v.pb(arr[j]);
				   difference=minSubsetDifference(v,v.size());
				   check=((sum-difference)/2);
				   if(check>=k)
			  		 {
			   	  			 cout<<v.size()<<"\n";
			   	  			 is=true;
			   	  			 break;
			   		}
				   
			   }   
			   if(!is)			   
			   	   cout<<"-1\n";
			   
			
			
	}




	return 0;

}


