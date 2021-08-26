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
};

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Dictionary d = Dictionary();
	d.insert("nayan");
	cout << d.search("naya");
	return 0;
}