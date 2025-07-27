class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int n = nums.size();
        int maxCount = -1e9;
        int currCount = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            if (nums[i] == 1)
            {
                currCount = currCount + 1;
            }
            else
            {
                maxCount = max(maxCount, currCount);
                currCount = 0;
            }
        }
        maxCount = max(maxCount, currCount);
        return maxCount;
    }
};