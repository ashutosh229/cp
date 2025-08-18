class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        /*
        strictly greater than the neighbours



        index return
        */
        long long NEG_INF = (long long)INT_MIN - 1;
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid;
        int ans = -1;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            long long prev;
            long long next;
            if (mid == 0)
            {
                prev = NEG_INF;
                if (n == 1)
                {
                    next = NEG_INF;
                }
                else
                {
                    next = nums[mid + 1];
                }
            }
            else if (mid == (n - 1))
            {
                next = NEG_INF;
                if (n == 1)
                {
                    prev = NEG_INF;
                }
                else
                {
                    prev = nums[mid - 1];
                }
            }
            else
            {
                prev = (long long)(nums[mid - 1]);
                next = (long long)(nums[mid + 1]);
            }
            if (nums[mid] > prev && nums[mid] < next)
            {
                low = mid + 1;
            }
            else if (nums[mid] < prev && nums[mid] > next)
            {
                high = mid - 1;
            }
            else if (nums[mid] > prev && nums[mid] > next)
            {
                ans = mid;
                return ans;
            }
            else
            {
                low = mid + 1;
            }
        }
        return -1;
    }
};