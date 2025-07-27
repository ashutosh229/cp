#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> adjList[N];
vector<int> visited[N];

void dfs(int source, int parent)
{
    visited[source] = 1;
    bool isCyclic = false;
    // take actions on vertex on entering the vertex

    for (int child : adjList[source])
    {
        if (visited[child] && child == parent)
            continue;
        if (visited[child])
            return true;
        // take actions on child after entering child

        bool isCyclicChild = dfs(child, parent); // dfs

        isCyclic = isCyclic | isCyclicChild;
        // take actions on child before exiting child
    }

    return isCyclic;
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

    bool isCyclic = false;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            bool isCyclicComponent = dfs(i, 0);
            if (isCyclicComponent)
            {
                isCyclic = true;
                break;
            }
        }
    }
    cout << isCyclic << endl;
    return 0;
}