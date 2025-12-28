#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string result = "YES";
        int n;
        string s;
        cin >> n >> s;
        vector<int> store;
        for (int i = 0; i <= n - 1; i++)
        {
            if (s[i] == '0')
            {
                store.push_back(i);
            }
        }
        if (store.empty())
        {
            result = "YES";
            cout << result << endl;
            continue;
        }
        vector<char> left_store(n, 0);
        vector<char> right_store(n, 0);
        int m = store.size();
        for (int i = 0; i <= m - 1; i++)
        {
            int idx = store[i];
            left_store[idx] = (idx == 0) || (s[idx - 1] == '0') || (idx >= 2 && s[idx - 1] == '1' && s[idx - 2] == '0');
            right_store[idx] = (idx == n - 1) || (s[idx + 1] == '0') || (idx + 2 < n && s[idx + 1] == '1' && s[idx + 2] == '0');
        }
        int count = 0;
        while (count < m)
        {
            int p = count;
            while (p + 1 < m && store[p + 1] == store[p] + 2 && s[store[p] + 1] == '1')
            {
                p = p + 1;
            }
            int first = store[count];
            int current = (left_store[first] ? 1 : 0) | (right_store[first] ? 2 : 0);
            if (!current)
            {
                result = "NO";
            }
            for (int i = count + 1; i <= p; i++)
            {
                int x = store[i];
                int next = 0;
                if ((current & 1) && right_store[x])
                {
                    next = next | 2;
                }
                if ((current & 2) && left_store[x])
                {
                    next = next | 1;
                }
                current = next;
                if (!current)
                {
                    result = "NO";
                }
            }
            count = p + 1;
        }
        cout << result << endl;
    }
    return 0;
}
