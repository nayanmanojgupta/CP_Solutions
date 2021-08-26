#include <bits/stdc++.h>
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long
#define pb push_back
#define countsetbit __builtin_popcount

using namespace std;
string getBinary(ll num)
{
    string s = "";
    while (num != 0)
    {
        if (num % 2 == 0)
        {
            s += "0";
        }
        else
        {
            s += "1";
        }
        num >>= 1;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    boost;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll tc;
    cin >> tc;
    while (tc--)
    {
       int n;
       cin>>n;
       char arr[n][n];
       vector<pair<int,int> > star;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               cin>>arr[i][j];
               if(arr[i][j]=='*')
                  {
                      star.push_back({i,j});

                  }

           }
       } 
       int fi=star[0].first;
       int fj=star[0].second;
       int si=star[1].first;
       int sj=star[1].second;
    //    cout<<fi<<" "<<fj<<"\n";
    //    cout<<si<<" "<<sj<<"\n";
       

       if(fi==si)
       {
           if(fi-1>=0 && si-1>=0)
           {
               fi=fi-1;
               si=si-1;

           }
           else
           {
               fi+=1;
               si+=1;

           }

       }
       else if(fj==sj)
       {
           if(fj+1<n && sj+1<n)
           {
               fj+=1;
               sj+=1;
               
           }
           else
           {
               fj-=1;
               sj-=1;

           }
       }
       else
       {
           int temp=fj;
           fj=sj;
           sj=temp;

       }


        arr[fi][fj]='*';
        arr[si][sj]='*';


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
               cout<<arr[i][j];
               cout<<"\n";

        }


    }

    return 0;
}
