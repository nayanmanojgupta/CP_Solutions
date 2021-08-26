#include <bits/stdc++.h>
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long

using namespace std;
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
        vector<int> even, odd;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;            
            if(a%2==0)
              even.push_back(a);
            else
              odd.push_back(a);

        }
        if(even.size()%2==0 && odd.size()%2==0)
           cout<<"YES\n";
        else if (even.size() % 2 == 1 && odd.size() % 2 == 1)
        {
                bool is=false;
                for(auto x:even)
                {
                    for(auto y:odd)
                    {
                        if(abs(x-y)==1)
                        {
                            cout<<"YES\n";
                            is=true;
                            break;

                        }
                    }
                    if(is)
                    {
                        break;

                    }
                }
                if(!is)
                   cout<<"NO\n";
                   
        }
        else
        {
            cout<<"NO\n";

        }
    }

    return 0;
}
