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
	int tc;
	cin>>tc;
	while(tc--)
	{
            int n;
            cin>>n;
            int arr[n+1];
            int num=0;
            for(int i=1;i<=n;i++)
            {
                cin>>arr[i];
                num<<=1;
                if(arr[i]>0)
                {
                        int temp=min(i,arr[i]);
                        
                      num|=((1<<temp)-1);

                }
              

            }

            string s="";
            while(num!=0)
            {
                if(num%2==0)
                   s+="0";
                else
                   s+="1";   

                   num/=2;
                   

            }
            for(int i=s.size();i<n;i++)
            {
                s+="0";
            }
            reverse(s.begin(),s.end());
            
               
            for(auto x:s)
               cout<<x<<" ";

               cout<<"\n";
       

	}


	return 0;

}


