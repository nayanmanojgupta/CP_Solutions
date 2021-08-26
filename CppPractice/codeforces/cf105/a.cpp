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
	ll testcases;
	cin>>testcases;
	while(testcases--)
	{
            string str;
            cin>>str;
            int n=str.length();
            char var1=str[0],var2,var3=str[n-1];
            if(var1==var2)
            {
                cout<<"NO\n";
                continue;
            }

            ll count=0;
            for(int i=0;i<n;i++)
            {
                if(str[i]==var1)
                    count++;
                else if(str[i]==var3)
                     count--;

            }
            if(count<0)
               var2=1;
            else
               var2=-1;

            count=0;
           
            for(int i=0;i<n;i++)
            {
                 if(str[i]==var1)
                    count++;
                else if(str[i]==var3)
                     count--;
                  else
                     count+=var2;

                     if(count<0)
                        {
                            break;
                        }   
                
            }      


            if(count!=0)
            {
                cout<<"NO\n";

            }
            else
            {
                cout<<"YES\n";

            }
           
            

           

	}




	return 0;

}

