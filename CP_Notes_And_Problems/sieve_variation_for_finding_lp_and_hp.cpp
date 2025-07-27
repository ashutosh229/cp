#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
vector<bool> isPrime(N, true);
vector<int> lp(N, 0);
vector<int> hp(N, 0);

int main()
{
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i <= N; i++)
    {
        if (isPrime[i])
        {
            lp[i] = i;
            hp[i] = i;
            for (int j = 2 * i; j <= N; j = j + i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[j] == 0)
                {
                    lp[j] = i;
                }
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
