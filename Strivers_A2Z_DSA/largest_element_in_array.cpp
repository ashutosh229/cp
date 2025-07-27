class Solution
{
public:
    int largestElement(vector<int> &nums)
    {
        int max = INT_MIN;
        int n = nums.size();
        for (int i = 0; i <= n - 1; i++)
        {
            if (nums[i] > max)
            {
                max = nums[i];
            }
        }
        return max;
    }
};