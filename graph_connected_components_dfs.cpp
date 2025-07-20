#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> adjList[N];
vector<int> visited[N];
vector<vector<int>> connectedComponents;
vector<int> currentConnectedComponent;

void dfs(int source)
{
    visited[vertex] = 1;
    currentConnectedComponent.push_back(vertex);
    // take actions on vertex on entering the vertex

    for (int child : adjList[vertex])
    {

        if (visited[child])
            continue;
        // take actions on child after entering child

        dfs(child); // dfs

        // take actions on child before exiting child
    }

    // take actions on vertex before exiting vertex
}

int main()
{
    int n;
    int m;
    cin >> n >> m;
    while (m--)
    {
        int v1;
        int v2;
        cin >> v1 >> v2;
        adjList[v1].push_back(v2);
        adjList[v2].push_back(v1);
    }

    int counter = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            currentConnectedComponent.clear();
            dfs(i);
            counter++;
            connectedComponents.push_back(currentConnectedComponent);
        }
    }
    cout << counter << endl;
    return 0;
}