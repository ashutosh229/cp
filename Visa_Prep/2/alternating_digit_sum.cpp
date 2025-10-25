#include <bits/stdc++.h>
using namespace std;

int alternatingDigitSum(long long n)
{
    string s = to_string(n);
    int total = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        int digit = s[i] - '0';
        if (i % 2 == 0)
            total += digit; // even index → add
        else
            total -= digit; // odd index → subtract
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
        long long n;
        cin >> n;
        cout << alternatingDigitSum(n) << "\n";
    }
    return 0;
}
