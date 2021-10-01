// Problem Link : https://www.codechef.com/problems/WALKFAST/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c, d, p, q, y;
        cin >> n >> a >> b >> c >> d >> p >> q >> y;

        int arr[n+1] ; 
        for(int i = 1 ; i <=n ; i++) 
          cin>>arr[i] ; 

        int dist = abs(arr[a] - arr[b]) * p;


        if (abs(arr[a] - arr[c]) * p <= y)
        {
            dist = min(dist, y + abs(arr[c] - arr[d]) * q + abs(arr[d] - arr[b]) * p);
        }

        cout << dist << endl;
    }
}
