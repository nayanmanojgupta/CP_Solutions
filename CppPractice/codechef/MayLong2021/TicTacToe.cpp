//problem link: https://www.codechef.com/MAY21B/problems/TCTCTOE
#include "bits/stdc++.h"
using namespace std;
#define ar array
#define ll long long
#define endl "\n"
#define REP(i,n) for (int i = 0; i < n; i++)
#define FOR(i,a,b) for (int i = a; i < b; i++)
const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
#define fastio                        \
ios_base::sync_with_stdio(false); \
cin.tie(NULL)



bool Iswinner(char mat[3][3], char c)
{
    REP(i,3)
    {
        if (mat[i][0] == c &&mat[i][1] == c && mat[i][2] == c)
            return true;
        if (mat[0][i] == c &&mat[1][i] == c &&mat[2][i] == c)
            return true;
    }

    if (mat[0][0] == c &&mat[1][1] == c &&mat[2][2] == c)
        return true;

    if (mat[0][2] == c &&mat[1][1] == c &&mat[2][0] == c)
        return true;

    return false;
}

bool IsValidBoard(int xCount, int oCount, bool xwin, bool owin)
{
    if (xCount == oCount || xCount == oCount + 1)
    {

        if (owin)
        {

            if (xwin)
                return false;
            return (xCount == oCount);
        }
        if (xwin && xCount != oCount + 1)
            return false;
        return true;
    }
    return false;
}


void solve()
{    int cnt1 = 0, cnt2 = 0;
    char arr[3][3];
    REP(i,3)
    {
        REP(j,3)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'X')
            {
                cnt1++;
            }
            if (arr[i][j] == 'O')
            {
                cnt2++;
            }
        }
    }

    bool XWinner= false;
    bool ZeroWinner = false;
    bool isempty = false;

    XWinner= Iswinner(arr, 'X');
    ZeroWinner = Iswinner(arr, 'O');

    for (int i = 0; i < 3 && !isempty; i++)
    {
        REP(j,3)
        {
            // cout<<arr[i][j];
            if (arr[i][j] == '_')
            {
                isempty = true;
                break;
            }
        }
        // cout<<endl;
    }

    bool valid = IsValidBoard(cnt1, cnt2, XWinner,ZeroWinner);

    if (valid && isempty && !XWinner && !ZeroWinner)
    {
        cout << "2" << endl;
    }
    else if (valid)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "3" << endl;
    }
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}