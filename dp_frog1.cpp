#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> heights(n + 10, 0);
    for (int i = 1; i <= n; i++)
    {
        int height;
        cin >> height;
        heights[i] = height;
    }

    vector<long long> dp(n + 10, -1);
    dp[1] = 0;
    dp[2] = abs(heights[2] - heights[1]);
    for (int i = 3; i <= n; i++)
    {
        long long state1 = dp[i - 1];
        long long trans1 = abs(heights[i] - heights[i - 1]);
        long long state2 = dp[i - 2];
        long long trans2 = abs(heights[i] - heights[i - 2]);

        long long totalCost1 = state1 + trans1;
        long long totalCost2 = state2 + trans2;

        dp[i] = min(totalCost2, totalCost1);
    }

    cout << dp[n] << endl;

    return 0;
}