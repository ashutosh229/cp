#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int solution(vector<int> dataSizes, int threshold)
{
    int n = dataSizes.size();
    if (n == 0)
    {
        return 0;
    }
    vector<long long> prefix_sums(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        prefix_sums[i + 1] = prefix_sums[i] + dataSizes[i];
    }
    int max_len = 0;
    for (int i = 0; i < n; ++i)
    {
        long long target_value = (long long)threshold + 2 * prefix_sums[i];
        auto it = upper_bound(prefix_sums.begin() + i + 1, prefix_sums.end(), target_value);
        int k = distance(prefix_sums.begin(), it) - 1;
        if (k >= i)
        {
            max_len = max(max_len, k - i);
        }
    }
    return max_len;
}