#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 

int main() {
    lln t;
    cin>>t;
    while (t--){
    lln n,k;
    cin>>n>>k;
    vector<lln>S(n);
    for(lln i=0;i<n;i++) cin>>S[i];

    sort(S.begin(),S.end(),greater<int>());
    
    lln ans=k;
    for(lln i=k;i<n;i++){
        if(S[i]==S[k-1]){
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}