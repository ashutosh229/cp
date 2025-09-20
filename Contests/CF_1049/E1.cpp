#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

unsigned int shrinker(unsigned int c, int pos)
{
    unsigned int low = c & ((1u << (pos - 1)) - 1u);
    unsigned int high = c >> pos;
    unsigned int result = low | (high << (pos - 1));
    return result;
}

int modularizer(long long base, long long expo)
{
    long long result = 1;
    base %= MOD;
    while (expo)
    {
        if (expo & 1)
            result = (result * base) % MOD;
        base = (base * base) % MOD;
        expo >>= 1;
    }
    return (int)result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
        int m;
        int k;
        cin >> n >> m;
        cin >> k;
        if (m == 1)
        {
            cout << 1 << '\n';
            continue;
        }

        vector<int> store1(k);
        for (int i = 0; i < k; i++)
        {
            int value;
            cin >> value;
            store1[i] = value;
        }

        vector<vector<int>> store2(n + 1);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                int value = store1[j];
                if (value <= i)
                    store2[i].push_back(value);
            }
        }

        vector<unsigned char> parity(2);
        parity[0] = 0;
        parity[1] = 1;

        for (int bits = 2; bits <= n; bits++)
        {
            unsigned SZ = 1u << bits;
            vector<unsigned char> current_store(SZ);

            bool alice = ((n - bits) % 2 == 0);
            const vector<int> &operations = store2[bits];
            const unsigned char *parity_data = parity.data();
            unsigned prevSZ = 1u << (bits - 1);

            for (unsigned S = 0; S < SZ; ++S)
            {
                if (alice)
                {
                    unsigned char res = 0;
                    for (int value : operations)
                    {
                        unsigned sh = shrinker(S, value);
                        if (sh < prevSZ && parity_data[sh])
                        {
                            res = 1;
                            break;
                        }
                    }
                    current_store[S] = res;
                }
                else
                {
                    unsigned char res = 1;
                    for (int value : operations)
                    {
                        unsigned sh = shrinker(S, value);
                        if (sh < prevSZ && !parity_data[sh])
                        {
                            res = 0;
                            break;
                        }
                    }
                    current_store[S] = res;
                }
            }

            parity.swap(current_store);
        }

        long long counter = 0;
        for (unsigned char par : parity)
            counter += par;

        int total = modularizer(2, n);
        long long ans = ((long long)total + (counter % MOD)) % MOD;
        cout << ans << '\n';
    }
    return 0;
}
