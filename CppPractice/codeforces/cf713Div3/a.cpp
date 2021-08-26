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
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int a;
        cin>>a;
        int choice1,choice2,count1=1,count2=0,ia=1,ib;
        choice1=a;
        for(int i=2;i<=n;i++)
        {
                int x;
                cin>>x;
                if(x==choice1)
                   {
                       count1++;
                       ia=i;
                   } 
        
                else
                {
                    count2++;
                    ib=i;

                }
                  
        }

        // cout<<count1<<" "<<count2<<"\n";
        if(count1>count2)
           cout<<ib<<"\n";
        else
          cout<<ia<<"\n";

        
    }




	return 0;

}





