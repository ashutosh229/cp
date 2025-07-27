class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> hash;
        int n = nums.size();
        vector<int> result;
        for (int i = 0; i <= n - 1; i++)
        {
            int first = nums[i];
            int second = target - first;
            if (hash.find(second) != hash.end())
            {
                result.push_back(i);
                result.push_back(hash[second]);
            }
            hash.insert({first, i});
        }
        return result;
    }
};