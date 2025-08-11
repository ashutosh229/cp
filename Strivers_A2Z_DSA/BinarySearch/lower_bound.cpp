class Solution
{
public:
    int lowerBound(vector<int> &arr, int target)
    {

        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int mid;
        int ans = -1;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (target < arr[mid])
            {
                ans = mid;
                high = mid - 1;
            }
            else if (target == arr[mid])
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        if (ans == -1)
            return n;
        else
            return ans;
    }
};
