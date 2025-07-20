#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
vector<int> height[N];
vector<int> depth[N];

void dfs(int vertex, int parent, vector<vector<int>> &adjList)
{
    for (int child : adjList[vertex])
    {
        if (child == [parent])
        {
            continue;
        }
        depth[child] = depth[parent] + 1;
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child] + 1)
    }
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int vertex;
        cin >> vertex;
        cout << height[vertex] << endl;
        cout << depth[vertex] << endl;
    }
    return 0;
}