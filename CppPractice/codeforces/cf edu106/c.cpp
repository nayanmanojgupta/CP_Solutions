#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> c(n,0);
        for(auto &x : c) {
            cin >> x;
        }
        vector<ll> rem(2,n), mn(2,LLONG_MAX);
        ll sum = 0;
        ll ans = LLONG_MAX;
        for(ll i=0; i<n; i++) {
            mn[i%2] = min(mn[i%2],c[i]);
            rem[i%2]--;
            sum += c[i];
            if(i > 0) {
                ll cur = sum + (rem[0] * mn[0]) + (rem[1] * mn[1]);
                ans = min(ans,cur);
            }
        }
        cout << ans << endl;
    }
}