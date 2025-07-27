#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &image, int n, int m, pair<int, int> source, int initialColor, int newColor)
{
    int i = source.first;
    int j = source.second;
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return;
    }
    if (image[i][j] != initialColor)
    {
        return;
    }

    image[i][j] = newColor;

    dfs(image, n, m, {i - 1, j}, initialColor, newColor);
    dfs(image, n, m, {i, j + 1}, initialColor, newColor);
    dfs(image, n, m, {i + 1, j}, initialColor, newColor);
    dfs(image, n, m, {i, j - 1}, initialColor, newColor);
}

void solve(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    int n = image.size();
    int m = image[0].size();
    pair<int, int> source = {sr, sc};
    int initialColor = image[sr][sc];
    if (initialColor != newColor)
    {
        dfs(image, n, m, source, initialColor, newColor);
    }
}

int main()
{
    solve(image, sr, sc, newColor); // will be given as input by the main function in the platform
    return 0;
}