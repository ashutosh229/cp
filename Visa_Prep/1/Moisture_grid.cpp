#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> smoothMoistureGrid(vector<vector<int>> &moisture_grid, int smoothing_radius)
{
    int n = moisture_grid.size();
    int m = moisture_grid[0].size();
    vector<vector<int>> updated(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum_neighbors = 0;
            int count_neighbors = 0;

            for (int r = i - smoothing_radius; r <= i + smoothing_radius; r++)
            {
                for (int c = j - smoothing_radius; c <= j + smoothing_radius; c++)
                {
                    if (r < 0 || r >= n || c < 0 || c >= m)
                        continue;
                    if (r == i && c == j)
                        continue;
                    sum_neighbors += moisture_grid[r][c];
                    count_neighbors++;
                }
            }

            int mean_neighbors = (count_neighbors > 0) ? (sum_neighbors / count_neighbors) : 0;
            updated[i][j] = (moisture_grid[i][j] + mean_neighbors) / 2;
        }
    }
    return updated;
}

int main()
{
    // Test Case 1
    vector<vector<int>> moisture_grid1 = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};
    int smoothing_radius1 = 1;

    vector<vector<int>> result1 = smoothMoistureGrid(moisture_grid1, smoothing_radius1);

    cout << "Output (Test Case 1):\n";
    for (auto &row : result1)
    {
        for (auto &val : row)
            cout << val << " ";
        cout << "\n";
    }

    // Test Case 2
    vector<vector<int>> moisture_grid2 = {
        {100, 0},
        {50, 150}};
    int smoothing_radius2 = 0;

    vector<vector<int>> result2 = smoothMoistureGrid(moisture_grid2, smoothing_radius2);

    cout << "\nOutput (Test Case 2):\n";
    for (auto &row : result2)
    {
        for (auto &val : row)
            cout << val << " ";
        cout << "\n";
    }

    return 0;
}

// not done   
