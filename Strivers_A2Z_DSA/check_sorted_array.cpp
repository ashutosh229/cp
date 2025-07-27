class Solution
{
public:
    bool isSorted(vector<int> &arr)
    {
        int n = arr.size();
        int max = -1e9;
        for (int i = 0; i <= n - 1; i++)
        {
            int element = arr[i];
            if (!(element >= max))
            {
                return false;
            }
            else
            {
                max = element;
            }
        }

        return true;
    }
};