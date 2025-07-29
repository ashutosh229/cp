class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        /*
        nums -> array
        -105 <= nums[i] <= 105
        3 <= nums.length <= 3000
        */

        /*
        triplet
        no duplicate triplets
        for no solution, return empty vector
        */
        int target = 0;
        int n = nums.size();
        set<vector<int>> ans;
        for (int i = 0; i <= n - 1; i++)
        {
            unordered_set<int> hash;
            for (int j = i + 1; j <= n - 1; j++)
            {
                int total = nums[i] + nums[j];
                int remaining = target - total;
                if (hash.find(remaining) != hash.end())
                {
                    vector<int> temp = {nums[i], nums[j], remaining};
                    sort(temp.begin(), temp.end());
                    ans.insert(temp);
                }
                hash.insert(nums[j]);
            }
        }

        vector < vector << int >> result;
        copy(ans.begin(), ans.end(), inserter(result, result.begin()));
        return result;
    }
};