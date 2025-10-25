// 4. Given a list of book titles - Should find the number of pairs of indices , where title_i is a
// prefix of title_j - Bruteforce doesnt work for the given conditions (Hint : Binary search)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> titles(n);
    for (int i = 0; i < n; i++)
        cin >> titles[i];

    sort(titles.begin(), titles.end());

    long long countPairs = 0;

    for (int i = 0; i < n; i++)
    {
        string prefix = titles[i];
        string nextPrefix = prefix + '{'; // character after 'z' in ASCII

        // find range of titles starting with this prefix
        auto start = lower_bound(titles.begin(), titles.end(), prefix);
        auto end = lower_bound(titles.begin(), titles.end(), nextPrefix);

        // number of strings starting with prefix (excluding itself)
        long long total = end - start - 1;
        countPairs += total;
    }

    cout << countPairs << endl;
    return 0;
}
