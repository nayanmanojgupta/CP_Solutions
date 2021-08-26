#include<bits/stdc++.h> 
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)   
#define ll long long 
#define fi for(ll i=0;i<n;i++)
#define pb push_back
#define countsetbit __builtin_popcount
 
using namespace std;
string getBinary(ll num){string s="";while(num!=0){ if(num%2==0){s+="0";}else{s+="1";}num>>=1;}reverse(s.begin(),s.end());return s;}
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
         int arr[n];
         fi 
         {
             cin>>arr[i];

         } 
         set<ll> st;
         if(arr[1]-arr[0]<0)
                   {
                       cout<<"-1\n";
                       continue;


                   }

          bool check=false;      
         for(int i=1;i<n;i++)
         {
                ll diff;
                diff=arr[i]-arr[i-1];
               if(diff==0)
                  check=true;
                st.insert(diff);
                
         }
        
        
         if(st.size()==1)
         {
             cout<<"0\n";
            continue;


         }
         if(check)
        {
            cout<<"-1\n";
            continue;

        }
         ll ans=0;
         if(st.size()==2)
         {
             bool pos=false,neg=false;
             for(auto x:st )
             {
                 if(x>=0)
                    pos=true;
                 else
                    neg=true;

                ans+=abs(x);

             }

             if(pos==false || neg==false)
             {
                 cout<<"-1\n";
                 continue;
                 
             }
                

         }
        ll c=arr[1]-arr[0];

         cout<<ans<<" "<<c<<"\n";

	}




	return 0;

}





