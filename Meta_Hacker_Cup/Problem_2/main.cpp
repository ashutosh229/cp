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

        int left = 0, right = 1e9;
        int answer = right;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            vector<bool> visited(N, false);
            bool canVisit = true;

            while (true)
            {
                int start = -1;
                for (int i = 0; i < N; i++)
                {
                    if (!visited[i] && A[i] <= mid)
                    {
                        start = i;
                        break;
                    }
                }

                if (start == -1)
                    break;

                visited[start] = true;
                bool changed = true;
                while (changed)
                {
                    changed = false;
                    for (int i = 0; i < N; i++)
                    {
                        if (!visited[i])
                        {
                            if ((i > 0 && visited[i - 1] && abs(A[i] - A[i - 1]) <= mid) ||
                                (i < N - 1 && visited[i + 1] && abs(A[i] - A[i + 1]) <= mid))
                            {
                                visited[i] = true;
                                changed = true;
                            }
                        }
                    }
                }
            }

            canVisit = true;
            for (int i = 0; i < N; i++)
            {
                if (!visited[i])
                {
                    canVisit = false;
                    break;
                }
            }

            if (canVisit)
            {
                answer = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        cout << "Case #" << tc << ": " << answer << "\n";
    }

    return 0;
}