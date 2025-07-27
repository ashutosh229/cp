#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<int> masks(q, 0);
    for (int i = 1; i <= q; i++)
    {
        int days_queries;
        cin >> days_queries;
        int mask = 0;
        for (int j = 1; j <= days_queries; j++)
        {
            int day;
            cin >> day;
            mask = mask | (1 << day);
        }
        masks[i - 1] = mask;
    }
    int max_common_days = 0;
    for (int i = 0; i <= q - 1; i++)
    {
        int base_mask = masks[i];
        for (int j = i + 1; j <= q - 1; j++)
        {
            int comparator_mask = masks[j];
            int intersection = base_mask & comparator_mask;
            int common_days = __builtin_popcount(intersection);
            if (common_days >= max_common_days)
            {
                max_common_days = max(max_common_days, common_days);
                worker1 = i;
                worker2 = j;
            }
        }
    }
    cout << max_common_days << endl;
    cout << worker1 << " " << worker2 << endl;
    return 0;
}