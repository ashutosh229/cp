#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++)
    {
        int N, A, B;
        cin >> N >> A >> B;

        vector<int> multipliers(2 * N);
        for (int i = 0; i < N - 1; i++)
        {
            multipliers[i] = 1;
        }

        int p = 1;
        for (int d = 1; d * d <= B; d++)
        {
            if (B % d == 0)
            {
                if (d <= A)
                    p = max(p, d);
                if (B / d <= A)
                    p = max(p, B / d);
            }
        }

        multipliers[N - 1] = p;
        int remaining = B / p;

        for (int i = N; i < 2 * N - 1; i++)
        {
            multipliers[i] = 1;
        }

        multipliers[2 * N - 1] = remaining;

        cout << "Case #" << tc << ":";
        for (int i = 0; i < 2 * N; i++)
        {
            cout << " " << multipliers[i];
        }
        cout << "\n";
    }

    return 0;
}