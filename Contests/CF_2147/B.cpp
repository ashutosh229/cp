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
        int m = 2 * n;
        int size = m + 1;
        vector<int> store(size, 0);
        vector<char> used_store(size, 0);
        int current = 1;
        for (int i = n; i >= 1; i--)
        {
            while (used_store[current])
            {
                current = current + 1;
            }
            int j = current + i;
            int new_current = current;
            while (j <= m && used_store[j])
            {
                j = j + i;
            }
            used_store[new_current] = used_store[j] = 1;
            store[new_current] = store[j] = i;
        }
        for (int i = 1; i <= m; i++)
        {
            if (i > 1)
            {
                cout << ' ';
            }
            cout << store[i];
        }
        cout << endl;
    }
    return 0;
}