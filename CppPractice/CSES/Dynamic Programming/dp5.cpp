
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
	int n;
    cin>>n;
    ll count=0;
    while(1)
    {
        ll temp=n,maxe=0;
        while(temp!=0)
        {
            
            maxe=max(temp%10,maxe);
            temp/=10;

        }
        n-=maxe;
        count++;
        if(n==0)
        {
            break;
        }

        
    } 

    cout<<count<<"\n";




	return 0;

}

