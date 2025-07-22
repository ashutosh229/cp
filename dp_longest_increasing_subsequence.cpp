#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int> &nums)
{
    int n = nums.size();
    vector<int> len(n);
    len[0] = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        int finalState = i;
        int tempLen = INT_MIN;
        for (int j = finalState - 1; i >= 0; i--)
        {
            if (nums[j] < nums[finalState])
            {
                int prevState = j;
                int trans = 1;
                int lenSubsequence = len[prevState] + trans;
                tempLen = max(tempLen, lenSubsequence);
            }
        }
        len[finalState] = tempLen;
    }
    int maxLen = *max_element(nums.begin(), nums.end());
    return maxLen
}

int main()
{
    return 0    ;
}