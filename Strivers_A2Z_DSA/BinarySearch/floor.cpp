class Solution
{
public:
    int findFloor(vector<int> &arr, int target)
    {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int mid;
        int ans = -1;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (arr[mid] == target)
            {
                ans = mid;
                low = mid + 1;
            }
            else if (target < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                ans = mid;
                low = mid + 1;
            }
        }
        return ans;
    }
};
