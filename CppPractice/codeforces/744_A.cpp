// https://codeforces.com/contest/1579/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a,b,c;
        for(auto x : s) 
        {
            if(x=='a') 
            {
                a++; 
            }else if(x=='b') 
            {
                b++;
            }else{
                c++;
            }
        }
        if(2*b==a+c)
        {
            cout<<"Yes"<<"\n";
        }else{
            cout<<"No"<<"\n";
        }
    }
}