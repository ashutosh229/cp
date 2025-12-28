#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        multiset<long long> storage;
        for (int i = 0; i <= n - 1; i++)
        {
            long long x;
            cin >> x;
            storage.insert(x);
        }
        long long sum = 0;
        vector<long long> result;
        while (!storage.empty())
        {
            auto it = prev(storage.end());
            long long last = *it;
            if (last != sum)
            {
                result.push_back(last);
                storage.erase(it);
                sum = sum + last;
            }
            else
            {
                auto lower_it = storage.lower_bound(sum);
                if (lower_it != storage.begin())
                {
                    auto prev_it = prev(lower_it);
                    long long prev_value = *prev_it;
                    result.push_back(prev_value);
                    storage.erase(prev_it);
                    sum = sum + prev_value;
                }
                else
                {
                    result.push_back(last);
                    storage.erase(it);
                    sum = sum + last;
                }
            }
        }
        for (int i = 0; i <= n - 1; i++)
        {
            if (i > 0)
                cout << " ";
            cout << result[i];
        }
        cout << endl;
    }
    return 0;
}