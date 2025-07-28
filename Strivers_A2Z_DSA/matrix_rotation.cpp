class Solution
{
public:
    void clockwiseRotateMatrix(vector<vector<int>> &matrix, int n, int m)
    {
        for (int i = 0; i <= n - 1; i++)
        {
            for (int j = i + 1; j <= m - 1; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (auto &row : matrix)
        {
            reverse(row.begin(), row.end());
        }
    }
    void rotate(vector<vector<int>> &matrix)
    {
        int angle = 90;           // angle
        int rotationType = 1;     // type
        int n = matrix.size();    // matrix
        int m = matrix[0].size(); // matrix
        angle = angle % 360;
        if (rotationType == 0)
        {
            angle = 360 - angle;
            angle = angle % 360;
        }
        int noRotations = angle / 90;
        for (int i = 1; i <= noRotations; i++)
        {
            clockwiseRotateMatrix(matrix, n, m);
        }
    }
};