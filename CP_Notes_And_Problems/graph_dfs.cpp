#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> adjList[N];
vector<int> visited[N];

void dfs(int source, vector<int> &answer)
{
    answer.push_back(vertex);
    visited[vertex] = 1;
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

    int source = 1;
    vector<int> answer;
    dfs(source, answer);

    for (auto &value : answer)
    {
        cout << value << endl;
    }
    return 0;
}