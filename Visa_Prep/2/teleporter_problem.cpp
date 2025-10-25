#include <bits/stdc++.h>
using namespace std;

int findPath(vector<vector<int>> &grid, map<pair<int, int>, pair<int, int>> &teleporters)
{
    int R = grid.size(), C = grid[0].size();
    vector<vector<bool>> visited(R, vector<bool>(C, false));
    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = true;

    while (!q.empty())
    {
        auto [r, c] = q.front();
        q.pop();

        // Check if we've reached the destination
        if (r == R - 1 && c == C - 1)
        {
            return 1;
        }

        // Move right
        if (c + 1 < C && grid[r][c + 1] != -1 && !visited[r][c + 1])
        {
            visited[r][c + 1] = true;
            q.push({r, c + 1});
        }

        // Use teleporters if available
        if (teleporters.find({r, c}) != teleporters.end())
        {
            auto [tr, tc] = teleporters[{r, c}];
            if (tr >= 0 && tr < R && tc >= 0 && tc < C && grid[tr][tc] != -1 && !visited[tr][tc])
            {
                visited[tr][tc] = true;
                q.push({tr, tc});
            }
        }
    }

    return -2; // No path found
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int R, C, T;
        cin >> R >> C >> T;
        vector<vector<int>> grid(R, vector<int>(C));
        map<pair<int, int>, pair<int, int>> teleporters;

        // Input grid
        for (int i = 0; i < R; ++i)
            for (int j = 0; j < C; ++j)
                cin >> grid[i][j];

        // Input teleporters
        for (int i = 0; i < T; ++i)
        {
            int r1, c1, r2, c2;
            cin >> r1 >> c1 >> r2 >> c2;
            teleporters[{r1, c1}] = {r2, c2};
        }

        // Find path
        cout << findPath(grid, teleporters) << "\n";
    }

    return 0;
}

// giving wrong answers  

