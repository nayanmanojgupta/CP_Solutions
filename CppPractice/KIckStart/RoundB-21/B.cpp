//  Problem Link
// https://codingcompetitions.withgoogle.com/kickstart/round/0000000000435a5b/000000000077a3a5

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    for(ll tt=1; tt<=t; tt++) {
        ll n;
        cin>>n;
    
        vector<ll> v(n,0);
    
        for(auto &x : v) {
            cin>>x;
        }
        vector<ll> diff_pref(n,INT_MAX); // diff_pref[i] = v[i] - v[i-1]
        vector<ll> diff_suff(n,INT_MAX); // diff_suff[i] = v[i+1] - v[i]
    
        for(ll i=1;i<n;i++) {
            diff_pref[i] = v[i]-v[i-1];
        }
    
        for(ll i=n-2;i>=0;i--) {
            diff_suff[i] = v[i+1]-v[i];
        }
    
        vector<ll> pref(n,2);
        vector<ll> suff(n,2);
    
        pref[0] = suff[n-1] = 1;
    
        // calculate length of longest arithmetic subarray ending at every index in prefix manner
        for(ll i=2;i<n;i++)
        {
            if(diff_pref[i]==diff_pref[i-1]) {
                pref[i] = 1 + pref[i-1];
            }
        }
    
        // calculate length of longest arithmetic subarray ending at every index in suffix manner
        for(ll i=n-3;i>=0;i--)
        {
            if(diff_suff[i]==diff_suff[i+1]) {
                suff[i] = 1 + suff[i+1];
            }
        }
    
        // changing first element or last element
        ll ans = max(1+suff[1],1+pref[n-2]);
    
        // maximize answer now by changing a single element
    
        for(ll i=1;i<n-1;i++)
        {
            // answer for subarray ending at current index without changing any element
            ans = max(ans,1+suff[i+1]);
            ans = max(ans,1+pref[i-1]);
    
            // check if current element can be changed or not?
    
            if((v[i+1]-v[i-1])%2)continue;
    
            ll diff = (v[i+1]-v[i-1])/2;
    
            if(i<2 || diff_pref[i-1]==diff) {
                ans = max(ans,2+pref[i-1]);
            }
    
            if(i>n-3 || diff_suff[i+1]==diff) {
                ans = max(ans,2 + suff[i+1]);
            }
    
            if((i>1 && diff_pref[i-1]!=diff) || (i<n-2 and diff_suff[i+1]!=diff)) continue;
            
            ans = max(ans,1 + pref[i-1] + suff[i+1]);
        }
    
        cout << "Case #" << tt << ": " << ans << endl;
    }
}