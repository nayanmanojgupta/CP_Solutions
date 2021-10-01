// https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/639/week-4-september-22nd-september-28th/3985/

/*
Given a palindromic string of lowercase English letters palindrome,
replace exactly one character with any lowercase English letter 
so that the resulting string is not a palindrome and
that it is the lexicographically smallest one possible.
*/

#include <iostream>
using namespace std;

string breakPalindrome(string palindrome)
{
    int n = palindrome.size(), i;
    if (n == 1)
        return "";
    for (i = 0; i < n / 2; i++)
    {
        if (palindrome[i] != 'a')
        {
            palindrome[i] = 'a';
            return palindrome;
        }
    }
    palindrome[n - 1] = 'b';
    return palindrome;
}

int main()
{
    int testCase;
    cin >> testCase;
    for (int t = 0; t < testCase; t++)
    {
        string palindrome;
        cin >> palindrome;
        string result = breakPalindrome(palindrome) << endl ; 
        cout<<result<<endl ; 
    }
}