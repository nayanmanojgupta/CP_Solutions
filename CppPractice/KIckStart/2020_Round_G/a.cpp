// problem link : https://codingcompetitions.withgoogle.com/kickstart/round/00000000001a0069/0000000000414bfb

#include <iostream>
using namespace std;
int main()
{
    int t, k;
    cin >> t;
    for (k = 1; k <= t; k++)
    {
        string s;
        int kick = 0, start = 0, count = 0, i, n;
        cin >> s;
        n = s.length();
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'S')
            {
                if (i + 4 < n && s[i + 1] == 'T' && s[i + 2] == 'A' && s[i + 3] == 'R' && s[i + 4] == 'T')
                {
                    start++;
                    count += kick;
                }
            }
            else if (s[i] == 'K')
            {
                if (i + 3 < n && s[i + 1] == 'I' && s[i + 2] == 'C' && s[i + 3] == 'K')
                {
                    kick++;
                }
            }
        }
        cout << "Case #" << k << ": " << count << "\n";
    }
}