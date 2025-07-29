class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        set<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int p1 = 0;
        int p2 = p1 + 1;
        int p3 = n - 1;
        int target = 0;
        while (p1 <= n - 1)
        {
            p2 = p1 + 1;
            p3 = n - 1;
            while (p2 < p3)
            {
                int total = nums[p1] + nums[p2] + nums[p3];
                if (total == target)
                {
                    vector<int> temp = {nums[p1], nums[p2], nums[p3]};
                    ans.insert(temp);
                    p2++;
                    p3--;
                }
                else if (total > target)
                {
                    p3--;
                }
                else
                {
                    p2++;
                }
            }
            p1++;
        }

        vector<vector<int>> result;
        copy(ans.begin(), ans.end(), inserter(result, result.begin()));
        return result;
    }
};