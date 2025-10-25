#include <bits/stdc++.h>
using namespace std;

int minAbsoluteDifference(vector<int> &nums, int x)
{
    int n = nums.size();
    multiset<int> s;
    int ans = INT_MAX;

    for (int j = 0; j < n; j++)
    {
        if (j >= x)
            s.insert(nums[j - x]); // insert elements at distance >= x

        if (!s.empty())
        {
            auto it = s.lower_bound(nums[j]);

            if (it != s.end())
                ans = min(ans, abs(nums[j] - *it)); // element >= nums[j]
            if (it != s.begin())
                ans = min(ans, abs(nums[j] - *prev(it))); // element < nums[j]
        }
    }

    return ans;
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << minAbsoluteDifference(nums, x) << endl;

    return 0;
}

// https: // leetcode.com/problems/minimum-absolute-difference-between-elements-with-constraint/