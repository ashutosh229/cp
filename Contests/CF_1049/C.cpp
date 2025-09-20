#include <bits/stdc++.h>
using namespace std;

const long long INF = 4e18 + 10;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long initial_sum = 0;
        int n;
        cin >> n;
        if (n == 1)
        {
            int value;
            cin >> value;
            cout << value << endl;
            continue;
        }
        vector<long long> store(n);
        for (int i = 0; i <= n - 1; ++i)
        {
            long long value;
            cin >> value;
            store[i] = value;
            int next_index = i + 1;
            if (next_index % 2 != 0)
            {
                initial_sum = initial_sum + value;
            }
            else
            {
                initial_sum = initial_sum - value;
            }
        }
        long long maxi = initial_sum;
        long long max_cost = n - 1;
        if (n % 2 == 0)
        {
            max_cost = n - 2;
        }
        long long higher_limit = initial_sum + max_cost;
        maxi = max(maxi, higher_limit);
        long long change_maximum = -INF;
        vector<long long> mini_left_prefix(n, INF);
        mini_left_prefix[0] = 2 * store[0];
        for (int i = 1; i <= n - 1; i++)
        {
            int prev_index = i - 1;
            mini_left_prefix[i] = mini_left_prefix[prev_index];
            if (i % 2 == 0)
            {
                long long compare_value = 2 * 1LL * store[i];
                compare_value = compare_value + i;
                mini_left_prefix[i] = min(mini_left_prefix[i], compare_value);
            }
        }
        for (int right_index = 1; right_index <= n - 1; right_index++)
        {
            if (right_index % 2 != 0)
            {
                int prev_index = right_index - 1;
                if (mini_left_prefix[prev_index] != INF)
                {
                    long long base_value = 2 * 1LL * store[right_index];
                    base_value = base_value + right_index;
                    long long prefix_value = mini_left_prefix[prev_index];
                    long long change_curr = base_value - prefix_value;
                    change_maximum = max(change_maximum, change_curr);
                }
            }
        }
        vector<long long> maxi_left_prefix(n, -INF);
        if (n > 1)
        {
            maxi_left_prefix[1] = 2*1LL* store[1] - 1;
        }
        for (int i = 2; i <= n - 1; i++)
        {
            int prev_index = i - 1;
            maxi_left_prefix[i] = maxi_left_prefix[prev_index];
            if (i % 2 != 0)
            {
                long long compare_value = 2 * 1LL * store[i];
                compare_value = compare_value - i;
                maxi_left_prefix[i] = max(maxi_left_prefix[i], compare_value);
            }
        }
        for (int right_index = 2; right_index <= n - 1; right_index++)
        {
            if (right_index % 2 == 0)
            {
                int prev_index = right_index - 1;
                if (maxi_left_prefix[prev_index] != -INF)
                {
                    long long prefix_value = maxi_left_prefix[prev_index];
                    long long base_value = 2 * 1LL * store[right_index];
                    base_value = base_value - right_index;
                    long long curr_change = prefix_value - base_value;
                    change_maximum = max(change_maximum, curr_change);
                }
            }
        }
        if (change_maximum > -INF)
        {
            long long higher_limit = initial_sum + change_maximum;
            maxi = max(maxi, higher_limit);
        }
        cout << maxi << endl;
    }
    return 0;
}