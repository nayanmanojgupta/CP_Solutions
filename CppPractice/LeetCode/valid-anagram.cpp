//Given two strings s and t, return true if t is an anagram of s, and false otherwise.

 //Input: s = "anagram", t = "nagaram"
 //Output: true
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> shash(26);
        vector<int> thash(26);
        int sl = s.length();
        int tl = t.length();
        if(tl!=sl)
            return false;
        // cout<<s[0]-'a';
        for(int i=0; i<sl; i++)
            shash[s[i]-'a']++;
        for(int i=0; i<tl; i++)
            thash[t[i]-'a']++;
        if(thash==shash)
            return true;
        else
            return false;
    }
};