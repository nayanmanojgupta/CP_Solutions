// Problem Link:
// https://codingcompetitions.withgoogle.com/kickstart/round/0000000000435a5b/000000000077a882#problem

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    for(ll tt=1; tt<=t; tt++) {
        ll n; cin >> n;
        string s; cin >> s;
        vector<ll> res(n,0);
        res[0] = 1;
        for(ll i=1; i<n; i++) {
            if(s[i-1] < s[i]) {
                res[i] = res[i-1] + 1;
            }
            else {
                res[i] = 1;
            }
        }
        cout << "Case #" << tt << ": ";
        for(auto i : res) {
            cout << i << " ";
        }
        cout << endl;
    }
}