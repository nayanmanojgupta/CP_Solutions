#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
        #endif
  int mod = 1e9+7;
  int n;
  cin >> n;
  vector<int> v(n+1,0);
  v[0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= 6 && i-j >= 0; j++) {
      (v[i] += v[i-j]) %= mod;
    }
  }
  cout << v[n] << endl;
}