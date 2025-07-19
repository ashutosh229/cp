#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
vector<bool> isPrime(N, true);

int main()
{
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i <= N; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= N; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << isPrime[x] << endl;
    }
}
