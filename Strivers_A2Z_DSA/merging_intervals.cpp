class Solution
{
public:
    static bool compareInterval(vector<int> &a, vector<int> &b)
    {
        if (!(a[0] == b[0]))
            return a[0] < b[0];
        else
            return a[1] < b[1];
    }
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end(), compareInterval);
        int n = intervals.size();
        vector<vector<int>> ans;
        for (int i = 0; i <= n - 1; i++)
        {
            int start = intervals[i][0];
            int end = intervals[i][1];
            if (!ans.empty() && ans.back()[1] >= start)
            {
                ans.back()[1] = max(ans.back()[1], end);
            }
            else
            {
                ans.push_back({start, end});
            }
        }

        return ans;
    }
};