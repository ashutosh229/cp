#include <vector>
using namespace std;
vector<int> solution(vector<int> forest, int bird)
{
    int total_length = 0;
    vector<int> found_indices;
    bool is_flying_right = true;
    while (total_length < 100)
    {
        int found_stick_index = -1;
        if (is_flying_right)
        {
            for (int i = bird + 1; i < forest.size(); ++i)
            {
                if (forest[i] > 0)
                {
                    found_stick_index = i;
                    break;
                }
            }
        }
        else
        {
            for (int i = bird - 1; i >= 0; --i)
            {
                if (forest[i] > 0)
                {
                    found_stick_index = i;
                    break;
                }
            }
        }
        if (found_stick_index != -1)
        {
            int stick_length = forest[found_stick_index];
            total_length += stick_length;
            found_indices.push_back(found_stick_index);
            forest[found_stick_index] = 0;
            is_flying_right = !is_flying_right;
        }
        else
        {
            break;
        }
    }
    return found_indices;
}
