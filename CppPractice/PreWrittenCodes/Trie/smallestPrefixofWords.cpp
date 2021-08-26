// https://www.geeksforgeeks.org/find-all-shortest-unique-prefixes-to-represent-each-word-in-a-given-list/

#include <bits/stdc++.h>
using namespace std;
vector<string> v;
// trie data structure
class Dictionary
{
private:
    struct TrieNode
    {
        int freq;
        TrieNode *child[26];
    };
    TrieNode *root;

public:
    TrieNode *getNode()
    {
        TrieNode *node = new TrieNode();
        node->freq = 0;
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
            curr->freq++;
        }
    }

    // in this approach the problem is we revisit some characters again , however it can be neglected
    // like for searching prefix of DOG and DOVE
    // we visit DO two times in below approach
    // Complexity of both approaches is same but some operations/visits can be saved
    void search(string word)
    {
        TrieNode *curr = root;
        string ans = "";
        for (int i = 0; i < word.length(); i++)
        {
            ans += word[i];
            curr = curr->child[word[i] - 'a'];
            if (curr->freq == 1)
            {
                v.push_back(ans);
                break;
            }
        }
        return;
    }

    // this approach is do the same thing but without revuisting that characters
    // here we will be preorder type thing on tree to make sure that we print every prefixes in single traversal
    void search3(TrieNode *root, string s)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->freq == 1)
        {
            v.push_back(s);
            return ;
        }
        for (int i = 0; i < 26; i++)
        {
            if (root->child[i] != NULL)
            {
                search3(root->child[i], s + (char)(i + 'a'));
            }
        }
    }
    void search2()
    {
        TrieNode *node = root;
        search3(node, "");
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Dictionary d = Dictionary();
    string arr[] = {"zebra", "dog", "duck", "dove"};
    for (int i = 0; i < 4; i++)
    {
        d.insert(arr[i]);
    }
    v.clear();
    d.search2();

    // for (int i = 0; i < 4; i++)
    // {
    //     d.search(arr[i]);
    // }
    // sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << "\n";
    //sort the global vector
    // print global vector of string
    return 0;
}