class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> hash;
        int n = nums.size();
        int counter = 0;
        int prefixSum = 0;
        hash[0] = 1;
        for (int i = 0; i <= n - 1; i++)
        {
            prefixSum = prefixSum + nums[i];
            int remaining = prefixSum - k;
            counter = counter + hash[remaining];
            hash[prefixSum] = hash[prefixSum] + 1;
        }

        return counter;
    }
};