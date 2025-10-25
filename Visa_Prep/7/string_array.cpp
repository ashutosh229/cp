// Q4.You are given an array of strings words.Return number of pairs of indices(i, j)
// such that either :
// 	• words[i] is a prefix of words[j], or
// 	• words[j] is a prefix of words[i].

#include <bits/stdc++.h>
using namespace std;

// Trie node structure
struct TrieNode
{
    unordered_map<char, TrieNode *> children;
    int count = 0; // number of words ending here
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode();
    }

    // Insert a word into the trie
    void insert(const string &word)
    {
        TrieNode *node = root;
        for (char c : word)
        {
            if (!node->children.count(c))
                node->children[c] = new TrieNode();
            node = node->children[c];
            node->count++; // prefix count
        }
    }

    // Count words in trie where prefix matches 'word'
    int countPrefixes(const string &word)
    {
        TrieNode *node = root;
        for (char c : word)
        {
            if (!node->children.count(c))
                return 0;
            node = node->children[c];
        }
        return node->count; // number of words where this is a prefix
    }
};

int countPrefixPairs(vector<string> &words)
{
    Trie trie;
    int n = words.size();

    // Insert all words into trie
    for (auto &w : words)
        trie.insert(w);

    long long totalPairs = 0;

    // For each word, count number of words it is a prefix of
    for (auto &w : words)
    {
        int cnt = trie.countPrefixes(w);
        totalPairs += cnt; // includes itself
        totalPairs--;      // remove (i, i)
    }

    return totalPairs;
}

int main()
{
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
        cin >> words[i];

    cout << countPrefixPairs(words) << "\n";
    return 0;
}

// Q4.You are given an array of strings words.Return number of pairs of indices(i, j)
// such that either :
// 	• words[i] is a prefix of words[j], or
// 	• words[j] is a prefix of words[i].