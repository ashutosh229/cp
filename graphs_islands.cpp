#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>> &grid, int m, int n, pair<int, int> source)
{
    int i = source.first;
    int j = source.second;
    if (i < 0 || i >= m || j < 0 || j >= n)
    { // using cond2 to check for edge and if true then go ahead
        return;
    }
    if (grid[i][j] == '0')
    { // using cond3 to check for edge and if true then go ahead
        return;
    }

    visited[i][j] = true; // taking actions after entering the node

    dfs(grid, m, n, {i - 1, j});
    dfs(grid, m, n, {i, j + 1});
    dfs(grid, m, n, {i + 1, j});
    dfs(grid, m, n, {i, j - 1});

    // taking actions before exiting the node
}

int numIslands(vector<vector<char>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    int counter = 0;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            pair<int, int> source = {i, j};
            if (grid[i][j)!='0')
                { // using cond1 to check for node and if node then go ahead
                    if (!visited[i][j])
                    {
                        dfs(grid, m, n, source);
                        counter++;
                    }
                }
        }
    }

    return counter;
}

int main()
{
    int counter = numIslands(vector<vector<char>> & grid); // will be given as input by the main function in the platform
    return 0;
}