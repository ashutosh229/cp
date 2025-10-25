#include <bits/stdc++.h>
using namespace std;

long long countEquivalentPairs(vector<int> &X, vector<int> &Y)
{
    unordered_map<long long, long long> freq;
    int n = X.size();

    for (int i = 0; i < n; i++)
    {
        long long sum = (long long)X[i] + (long long)Y[i];
        freq[sum]++;
    }

    long long total = 0;
    for (auto &p : freq)
    {
        long long k = p.second;
        total += k * k; // Each value contributes k² pairs
    }
    return total;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> X(n), Y(n);
        for (int i = 0; i < n; i++)
            cin >> X[i];
        for (int i = 0; i < n; i++)
            cin >> Y[i];

        cout << countEquivalentPairs(X, Y) << "\n";
    }
    return 0;
}

// done  

