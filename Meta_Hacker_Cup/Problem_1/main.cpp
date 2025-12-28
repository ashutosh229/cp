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
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int min_ladder = 0;

        for (int i = 0; i < N - 1; i++)
        {
            int height_diff = abs(A[i] - A[i + 1]);
            min_ladder = max(min_ladder, height_diff);
        }

        cout << "Case #" << tc << ": " << min_ladder << "\n";
    }
    return 0;
}