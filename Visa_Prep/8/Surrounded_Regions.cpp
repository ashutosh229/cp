#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>> &board, int i, int j)
{
    int m = board.size(), n = board[0].size();
    if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != 'O')
        return;
    board[i][j] = '#'; // mark as safe
    dfs(board, i + 1, j);
    dfs(board, i - 1, j);
    dfs(board, i, j + 1);
    dfs(board, i, j - 1);
}

void solve(vector<vector<char>> &board)
{
    if (board.empty() || board[0].empty())
        return;
    int m = board.size(), n = board[0].size();

    // Step 1: mark border-connected 'O's
    for (int i = 0; i < m; i++)
    {
        if (board[i][0] == 'O')
            dfs(board, i, 0);
        if (board[i][n - 1] == 'O')
            dfs(board, i, n - 1);
    }
    for (int j = 0; j < n; j++)
    {
        if (board[0][j] == 'O')
            dfs(board, 0, j);
        if (board[m - 1][j] == 'O')
            dfs(board, m - 1, j);
    }

    // Step 2: flip all remaining 'O' to 'X', restore '#' to 'O'
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 'O')
                board[i][j] = 'X';
            else if (board[i][j] == '#')
                board[i][j] = 'O';
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<char>> board(m, vector<char>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    solve(board);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << board[i][j] << " ";
        cout << "\n";
    }

    return 0;
}

// 130. Surrounded Regions