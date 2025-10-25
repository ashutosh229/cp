#include <bits/stdc++.h>
using namespace std;

int longestCommonPrefixLength(vector<string> &words)
{
    if (words.empty())
        return 0;

    int n = words.size();
    int minLength = INT_MAX;
    for (auto &word : words)
        minLength = min(minLength, (int)word.size());

    int prefixLength = 0;

    for (int i = 0; i < minLength; i++)
    {
        char c = words[0][i];
        bool allMatch = true;
        for (int j = 1; j < n; j++)
        {
            if (words[j][i] != c)
            {
                allMatch = false;
                break;
            }
        }
        if (!allMatch)
            break;
        prefixLength++;
    }

    return prefixLength;
}

int main()
{
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
        cin >> words[i];

    cout << longestCommonPrefixLength(words) << endl;
    return 0;
}

// 3043. Find the Length of the Longest Common Prefix
