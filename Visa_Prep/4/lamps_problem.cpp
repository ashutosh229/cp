#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<int>> lamps)
{
    map<long long, int> delta;
    for (const auto &lamp : lamps)
    {
        long long center = lamp[0];
        long long radius = lamp[1];

        delta[center - radius]++;
        delta[center + radius + 1]--;
    }

    int max_lamps = -1;
    int current_lamps = 0;
    long long result_coordinate = 0;

    if (lamps.empty())
    {
        return 0;
    }

    long long prev_coordinate = delta.begin()->first;

    for (const auto &pair : delta)
    {
        long long current_coordinate = pair.first;
        int change = pair.second;

        if (current_lamps > max_lamps)
        {
            max_lamps = current_lamps;
            result_coordinate = prev_coordinate;
        }

        current_lamps += change;
        prev_coordinate = current_coordinate;
    }

    return static_cast<int>(result_coordinate);
}