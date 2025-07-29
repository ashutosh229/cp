class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int top = 0;
        int bottom = rows - 1;
        int left = 0;
        int right = cols - 1;
        vector<int> ans;
        while (left <= right && top <= bottom)
        {
            for (int i1 = left; i1 <= right; i1++)
            {
                ans.push_back(matrix[top][i1]);
            }
            top++;

            for (int i2 = top; i2 <= bottom; i2++)
            {
                ans.push_back(matrix[i2][right]);
            }
            right--;

            if (top <= bottom)
            {
                for (int i3 = right; i3 >= left; i3--)
                {
                    ans.push_back(matrix[bottom][i3]);
                }
                bottom--;
            }

            if (left <= right)
            {
                for (int i4 = bottom; i4 >= top; i4--)
                {
                    ans.push_back(matrix[i4][left]);
                }
                left++;
            }
        }

        return ans;
    }
};