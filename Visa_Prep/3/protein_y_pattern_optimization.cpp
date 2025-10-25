#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Function to calculate the minimum number of changes required to transform the matrix into a valid Y-pattern
int minChangesToYPattern(const vector<vector<int>> &matrix, int n)
{
    int minChanges = INT_MAX;

    // Iterate over all possible Y-pattern configurations
    for (int y = 0; y < 3; ++y)
    {
        for (int b = 0; b < 3; ++b)
        {
            if (y == b)
                continue; // Y-pathway and background must have different states

            int changes = 0;

            // Count changes for Y-pathway cells
            for (int i = 0; i <= n / 2; ++i)
            {
                if (matrix[i][i] != y)
                    ++changes; // Main diagonal
                if (matrix[i][n - 1 - i] != y)
                    ++changes; // Anti-diagonal
                if (matrix[i][n / 2] != y)
                    ++changes; // Vertical stem
            }

            // Count changes for background cells
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    bool isYCell = (i == j && i <= n / 2) || (i == n - 1 - j && i <= n / 2) || (j == n / 2 && i >= n / 2);
                    if (!isYCell && matrix[i][j] != b)
                        ++changes;
                }
            }

            // Update the minimum changes
            minChanges = min(minChanges, changes);
        }
    }

    return minChanges;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> matrix(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> matrix[i][j];
            }
        }

        // Calculate and print the minimum number of changes for the current test case
        cout << minChangesToYPattern(matrix, n) << endl;
    }

    return 0;
}

// not done because giving wrong answer   
