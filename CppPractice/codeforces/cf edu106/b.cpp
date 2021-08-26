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
            string s;
            cin>>s;
            int temp=s.length();
            bool is=false;

            for(int i=1;i<s.length();i++)
            {
                if(s[i]=='1' && s[i-1]=='1')
                {
                    temp=i;
                    break;

                }
            } 

            // cout<<temp<<"\n";

            for(int i=temp+2;i<s.length();i++)
            {
                if(s[i]=='0' && s[i-1]=='0')
                {
                    is=true;
                    break;

                }
            }


            if(is)
            {
                cout<<"No\n";

            }
            else
            {
                cout<<"Yes\n";

            }
	}




	return 0;

}





