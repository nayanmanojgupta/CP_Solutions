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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        int n ;
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n;i++)
            cin>>arr[i];
            sort(arr,arr+2*n);
        int j=2*n-1;
        int k=n;    
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" "<<arr[k++]<<" ";
        }    
        cout<<"\n";
    }

    return 0;
}
