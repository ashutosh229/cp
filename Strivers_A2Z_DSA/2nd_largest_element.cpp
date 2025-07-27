class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        int n = arr.size();
        int max = INT_MIN;
        int max_two = INT_MIN;
        for (int i = 0; i <= n - 1; i++)
        {
            int element = arr[i];
            if (element >= max)
            {
                int temp = max;
                max = element;
                if (temp >= max_two && temp != max)
                {
                    max_two = temp;
                }
            }
            else if (element < max && element >= max_two)
            {
                max_two = element;
            }
            else
            {
                continue;
            }
        }

        if (max_two == INT_MIN)
            return -1;
        else
            return max_two;
    }
};