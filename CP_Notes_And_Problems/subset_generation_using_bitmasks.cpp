#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i <= n - 1; i++)
    {
        int num;
        cin >> num;
        nums[i] = num;
    }
    int total_subsets = pow(2, n);
    vector<vector<int>> subsets(total_subsets);
    for (int i = 0; i <= total_subsets - 1; i++)
    {
        for (int pos = 0; pos <= 31; pos++)
        {
            if (!(i & (1 << pos)))
            {
                subsets[i].push_back(nums[n-(pos+1))]);
            }
        }
    }
    for (auto &subset : subsets)
    {
        for (auto &value : subset)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}