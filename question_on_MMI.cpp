#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
const int M = 1e9 + 7;
vector<int> fact(N);

int binaryExponentiation(int a, int b, int M)
{
    int result = 1;
    int multiplier = 3;
    while (b > 1)
    {
        if (b & 1)
        {
            result = (result * 1LL * multiplier) % M;
        }
        b = b >> 1;
        multiplier = (multiplier * 1LL * multiplier) % M;
    }

    return result;
}

int main()
{
    fact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = (fact[i - 1] * 1LL * i) % M;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        int k;
        cin >> n >> k;

        int numerator = fact[n];
        int denominator = (fact[n - k] * 1LL * fact[k]) % M;
        int denominator_inverse = binaryExponentiation(denominator, M - 2, M);
        int ans = (numerator * 1LL * denominator_inverse) % M;
        cout << ans << endl;
    }

    return 0;
}