class Solution
{
public:
    int countFreq(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid;
        int first = -1;
        int last = -1;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (nums[mid] == target)
            {
                high = mid - 1;
                first = mid;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        low = 0;
        high = n - 1;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (nums[mid] == target)
            {
                low = mid + 1;
                last = mid;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        int occurences = 0;
        if (first == -1)
            return occurences;
        occurences = (last - first) + 1;
        return occurences;
    }
};
