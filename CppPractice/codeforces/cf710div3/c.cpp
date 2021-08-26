#include<bits/stdc++.h> 
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)   
#define ll long long 
#define fi for(ll i=0;i<n;i++)
#define pb push_back
#define countsetbit __builtin_popcount
 
using namespace std;
string getBinary(ll num){string s="";while(num!=0){ if(num%2==0){s+="0";}else{s+="1";}num>>=1;}reverse(s.begin(),s.end());return s;}



// It is just the implementation of longest common substring


int solve(string a,string b,int n,int m)
{
   int dp[n+1][m+1];
   for(int i=0;i<=n;i++)
       dp[i][0]=0;
   for(int i=0;i<=m;i++)
       dp[0][i]=0;

       int res=0;

       for(int i=1;i<=n;i++)
       {
          for(int j=1;j<=m;j++)
          {
             if(a[i-1]==b[j-1])
                {
                   dp[i][j]=dp[i-1][j-1]+1;
                   res=max(res,dp[i][j]);

                }
                else
                 dp[i][j]=0;
          }
       }


       return (n+m-res*2);
    

      
}

int main()
{
   #ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
   #endif
   ll tc;
   cin>>tc;
   while(tc--)
   {
      string a,b;
      cin>>a>>b;
      int n,m;
      n=a.length();
      m=b.length();
      cout<<solve(a,b,n,m)<<"\n";

   }

   return 0;

}


	






