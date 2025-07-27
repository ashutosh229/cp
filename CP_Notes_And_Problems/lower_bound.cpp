#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &nums, int low, int high, int target)
{
    int ans = -1;
    int mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
            ans = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int target;
    cin >> target;
    int low = 0;
    int high = n - 1;
    int ans = lower_bound(nums, low, high, target);
    cout << ans << endl;
    return 0;
}