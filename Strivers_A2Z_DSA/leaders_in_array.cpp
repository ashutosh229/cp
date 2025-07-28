
#include <bits/stdc++.h>
class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(vector<int> &arr)
    {
        int n = arr.size();
        int maxi = -1e9;
        vector<int> ans;
        for (int i = n - 1; i >= 0; i--)
        {
            int element = arr[i];
            if (element >= maxi)
            {
                ans.push_back(element);
                maxi = element;
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};