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
      int n;
      cin>>n;
      int arr[n];
      map<int,int> mp;
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
          mp[arr[i]]++;
        
      }
      priority_queue<int> q;
      for(auto u:mp)
      {
          q.push(u.second);
      }
      while(q.size()>=2)
      {
          int a=q.top();
          q.pop();
          int b=q.top();
          q.pop();
         a--;
         b--;

          if(a!=0)
            q.push(a);
           if(b!=0)
             q.push(b);

      }
      if(q.size()==0)
         cout<<"0\n";
         else
           cout<<q.top()<<"\n";

        
       

	}




	return 0;

}





