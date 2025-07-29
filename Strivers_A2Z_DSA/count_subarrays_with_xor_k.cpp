class Solution
{
public:
    long subarrayXor(vector<int> &arr, int k)
    {
        unordered_map<int, int> hash;
        hash[0] = 1;
        int n = arr.size();
        int prefixXor = 0;
        int count = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            prefixXor = prefixXor ^ arr[i];
            int remaining = prefixXor ^ k;
            count = count + hash[remaining];
            hash[prefixXor]++;
        }
        return count;
    }
};