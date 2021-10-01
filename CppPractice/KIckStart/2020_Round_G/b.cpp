// Problem link : https://codingcompetitions.withgoogle.com/kickstart/round/00000000001a0069/0000000000414a23
#include <iostream>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        int n, j, k;
        cin >> n;
        long arr[n][n];
        long long sum = 0, max = 0;
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
                cin >> arr[j][k];
        }

        for (k = 0; k < n; k++)
        {
            sum = 0;
            for (j = 0; j < n - k; j++)
            {
                sum += arr[j][j + k];
            }
            if (sum > max)
                max = sum;
        }
        for (j = 1; j < n; j++)
        {
            sum = 0;
            for (k = 0; k < n - j; k++)
            {
                sum += arr[j + k][k];
            }
            if (sum > max)
                max = sum;
        }

        cout << "Case #" << i << ": " << max << "\n";
    }
}