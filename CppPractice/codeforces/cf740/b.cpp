#include <bits/stdc++.h>
using namespace std;
// trie data structure
class Dictionary
{
public:
    struct TrieNode
    {
        bool isEnd;
        TrieNode *child[26];
    };
    TrieNode *root;

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
            if (curr->child[word[i]] == NULL)
            {
                curr->child[word[i]] = getNode();
            }
            curr = curr->child[word[i]];
        }
        curr->isEnd = true;
    }

    // search node
    bool search(string word)
    {
        TrieNode *curr = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (curr->child[word[i]] == NULL)
            {
                return false;
            }
            curr = curr->child[word[i]];
        }
        return curr->isEnd;
    }
};

int main()
{
    Dictionary d = Dictionary();
    d.insert("nayan");
    return 0;
}