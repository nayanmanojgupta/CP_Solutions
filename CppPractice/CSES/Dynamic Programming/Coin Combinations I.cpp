#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl "\n"

const int MAX = 1e6 + 5;
const int MOD = 1e9 + 7;
ll dp[MAX];
vector<int> v;

int helper(int target, int n)
{
    if (target == 0)
        return 1;
    if (target < 0)
        return 0;

    ll &ans = dp[target];
    if (ans != -1)
        return ans;
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = (ans + helper(target - v[i], n)) % MOD;
    }

    return ans % MOD;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout << helper(x, n);
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;

    //Code starts from here //
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    // Code end here //
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const ll m = 1e9+7;
// void minCoins(int N,int x,int arr[],vector<int> &v)
// {
//     for(int i = 1;i<= N; i++)
//     {
//         ll sum = 0;
//         for(int j =0;j<x;j++)
//         {
//             if( i >= arr[j])
//             {
//                 sum =  (sum + v[i-arr[j]])%m;
//             }
//         }
//         v[i] = sum;
//     }
// }
// int main()
// {
//     int x, N;
//     cin >> x >> N;
//     int arr[x];
//     for(int i =0;i < x ;i++)
//     {
//         cin >> arr[i];
//     }
//     vector<int> v(N+1,0);
//     v[0] = 1;
//      minCoins(N,x,arr,v);
//     cout << v[N] << endl;
// }