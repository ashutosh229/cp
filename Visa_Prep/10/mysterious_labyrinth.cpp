#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
int solution(int m, int n, vector<vector<int>> obstacles, vector<vector<int>> teleports)
{
    set<pair<int, int>> obstacle_set;
    for (const auto &obs : obstacles)
    {
        obstacle_set.insert({obs[0], obs[1]});
    }
    map<pair<int, int>, pair<int, int>> teleport_map;
    set<pair<int, int>> visited_teleports;
    for (const auto &tele : teleports)
    {
        teleport_map[{tele[0], tele[1]}] = {tele[2], tele[3]};
    }
    int row = 0;
    int col = 0;
    int cell_count = 1;
    while (row < m && col < n && (row != m - 1 || col != n - 1))
    {
        int next_row = row;
        int next_col = col + 1;
        if (next_col >= n)
        {
            next_row = row + 1;
            next_col = 0;
        }
        if (next_row >= m)
        {
            return -1;
        }
        pair<int, int> next_cell = {next_row, next_col};
        if (obstacle_set.count(next_cell))
        {
            return -1;
        }
        if (teleport_map.count(next_cell))
        {
            if (visited_teleports.count(next_cell))
            {
                return -2;
            }
            visited_teleports.insert(next_cell);
            pair<int, int> teleport_end = teleport_map[next_cell];
            row = teleport_end.first;
            col = teleport_end.second;
            cell_count += 2;
        }
        else
        {
            row = next_row;
            col = next_col;
            cell_count++;
        }
    }
    if (row == m - 1 && col == n - 1)
    {
        return cell_count;
    }
    return -1;
}