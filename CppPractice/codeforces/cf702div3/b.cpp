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
            vector<int> count(3,0);
            fi
              { 
                  cin>>arr[i];
                  count[arr[i]%3]++;
              }

            ll ans=0;
           while(*min_element(count.begin(),count.end())!=n/3)
           {
               for(int i=0;i<3;i++)
               {
                   if(count[i]>n/3)
                   {
                       count[i]--;
                       ans++;
                       count[(i+1)%3]++;

                   }
               }
           }   

           cout<<ans<<"\n";
           

              
          
	}




	return 0;

}





