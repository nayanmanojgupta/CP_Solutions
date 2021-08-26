#include <bits/stdc++.h>
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long
#define fi for (ll i = 0; i < n; i++)
#define pb push_back
#define countsetbit __builtin_popcount

using namespace std;
int main()
{
    boost;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n, tc;
    cin >> n;
    cin >> tc;
    while (tc--)
    {
        int target;
        cin>>target;
        int l=1,r=n;
        while(l<r)
        {
                int mid=(l+r)/2;
                cout<<"? 1"<<" "<<mid<<endl;
                int backAns;
                cin>>backAns;
                int zeros=mid-backAns;
                if(zeros<target)
                {
                    l=mid+1;
                }
                else
                {
                    r=mid;

                }

        }
        cout<<"! "<<l<<endl;


    }

    return 0;
}
