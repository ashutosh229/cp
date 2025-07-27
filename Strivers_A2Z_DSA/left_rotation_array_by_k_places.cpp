class Solution
{
public:
    void rotateArr(vector<int> &nums, int d)
    {
        int n = nums.size();
        d = d % n;
        vector<int> temp(d, 0);
        for (int i = 0; i <= d - 1; i++)
        {
            temp[i] = nums[i];
        }
        for (int i = d; i <= n - 1; i++)
        {
            nums[i - d] = nums[i];
        }
        for (int i = d; i >= 1; i--)
        {
            int position = n - i;
            int position_initial = d - i;
            nums[position] = temp[position_initial];
        }
    }
};