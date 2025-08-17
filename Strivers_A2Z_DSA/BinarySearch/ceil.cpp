// User function Template for C++
class Solution
{
public:
    int findCeil(vector<int> &arr, int target)
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
                high = mid - 1;
                ans = mid;
            }
            else if (arr[mid] > target)
            {
                high = mid - 1;
                ans = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};