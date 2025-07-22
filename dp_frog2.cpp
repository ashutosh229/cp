#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> heights(n + 10, 0);
    for (int i = 1; i <= n; i++)
    {
        int height;
        cin >> height;
        heights[i] = height;
    }

    vector<long long> dp(n + 10, -1);

    dp[1] = 0;

    for (int i = 2; i <= k; i++)
    {
        if (i > n)
            break;
        int finalState = i;
        long long tempAns = LLONG_MAX;
        for (int j = 1; j <= finalState - 1; j++)
        {
            long long prevState = dp[j];
            long long prevTrans = abs(heights[finalState] - heights[j]);
            long long totalCost = prevState + prevTrans;
            tempAns = min(tempAns, totalCost);
        }
        dp[finalState] = tempAns;
    }

    for (int i = k + 1; i <= n; i++)
    {
        if (i > n)
            break;
        int finalState = i;
        long long tempAns = LLONG_MAX;
        int initialPrevState = finalState - k;
        for (int j = initialPrevState; j <= finalState - 1; j++)
        {
            long long prevState = dp[j];
            long long prevTrans = abs(heights[finalState] - heights[j]);
            long long totalCost = prevState + prevTrans;
            tempAns = min(tempAns, totalCost);
        }
        dp[finalState] = tempAns;
    }

    cout << dp[n] << endl;

    return 0;
}