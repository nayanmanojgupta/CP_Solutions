#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
bool check4(ll u, ll r, ll d, ll l, ll U, ll R, ll D, ll L)
{
  l--, d--, L--, D--;
  if (l >= 0 && r >= 0 && d >= 0 && u >= 0 && l <= L && d <= D && r <= R && u <= U)
    return true;
  else
  {
    l++, d++;
    if (l >= 0 && r >= 0 && d >= 0 && u >= 0 && l <= L && d <= D && r <= R && u <= U)
      return true;
    else
      return false;
  }
}

bool check3(ll u, ll r, ll d, ll l, ll U, ll R, ll D, ll L)
{
  if (check4(u, r - 1, d - 1, l, U, R - 1, D - 1, L))
    return true;
  return check4(u, r, d, l, U, R - 1, D - 1, L);
}

bool check2(ll u, ll r, ll d, ll l, ll U, ll R, ll D, ll L)
{
  if (check3(u - 1, r - 1, d, l, U - 1, R - 1, D, L))
    return true;
  return check3(u, r, d, l, U - 1, R - 1, D, L);
}

bool check1(ll u, ll r, ll d, ll l, ll U, ll R, ll D, ll L)
{
  if (check2(u - 1, r, d, l - 1, U - 1, R, D, L - 1))
    return true;
  return check2(u, r, d, l, U - 1, R, D, L - 1);
}

int main()
{
  boost;
  #ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
  #endif
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,u,r,d,l;
    cin>>n>>u>>r>>d>>l;
    if (check1(u,r,d,l,n,n,n,n))
      cout<<"YES\n";
    else
      cout<<"NO\n";
  }
  return 0;
}