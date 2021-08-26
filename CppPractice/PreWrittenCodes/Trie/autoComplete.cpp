#include <bits/stdc++.h>
using namespace std;
// trie data structure
class Dictionary
{
private:
    struct TrieNode
    {
        bool isEnd;
        TrieNode *child[26];
    };
    TrieNode *root;
    vector<string> v; // for storing autocomplete suggestions
public:
    TrieNode *getNode()
    {
        TrieNode *node = new TrieNode();
        node->isEnd = false;
        for (int i = 0; i < 26; i++)
        {
            node->child[i] = NULL;
        }
        return node;
    }
    Dictionary()
    {
        root = getNode();
    }
    // insert word
    void insert(string word)
    {
        TrieNode *curr = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (curr->child[word[i] - 'a'] == NULL)
            {
                curr->child[word[i] - 'a'] = getNode();
            }
            curr = curr->child[word[i] - 'a'];
        }
        curr->isEnd = true;
    }

    // search node
    bool search(string word)
    {
        TrieNode *curr = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (curr->child[word[i] - 'a'] == NULL)
            {
                return false;
            }
            curr = curr->child[word[i] - 'a'];
        }
        return curr->isEnd;
    }
    void helper(TrieNode *root, string s)
    {
        if (root->isEnd == true)
        {
            v.push_back(s);
        }
        for (int i = 0; i < 26; i++)
        {
            if (root->child[i] != NULL)
            {
                helper(root->child[i], s + (char)(i + 'a'));
            }
        }
        return;
    }
    vector<string> autoComplete(string word)
    {
        v.clear();
        string s = "";
        TrieNode *curr = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (curr->child[word[i] - 'a'] == NULL)
            {
                return v;
            }
            s += word[i];
            curr = curr->child[word[i] - 'a'];
        }
        helper(curr, s);
        // preorder traversal kruga iss helper function se
        // so that hrr possible word jo bn skta h usko mai print kr du
        return v;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Dictionary d = Dictionary();
    string arr[] = {"hello", "dog", "hell", "cat", "hel", "help", "helps", "helping"};
    for (int i = 0; i < 8; i++)
    {
        d.insert(arr[i]);
    }
    vector<string> ans = d.autoComplete("hel");
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}