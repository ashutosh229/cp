#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int m = 1 << n;
        int leaves = 1 << n;
        int len_arr = 1 << (n + 1);
        int total = len_arr - 1;
        vector<int> arr(len_arr);
        arr[leaves] = w;
        vector<int> space(n, 0);
        int remaining = w - 1;
        for (int level = n - 1; level >= 0; level--)
        {
            int capacity = 1 << level;
            if (remaining > 0)
            {
                int pupil = min(remaining, capacity);
                space[level] = pupil;
                remaining = remaining - pupil;
            }
        }
        vector<int> storage;
        vector<int> kap;
        for (int i = 1; i <= w - 1; i++)
            storage.push_back(i);
        for (int i = w + 1; i <= m; i++)
            kap.push_back(i);
        set<int> upper;
        int current = leaves;
        int sign = 0;
        int kim = 0;
        for (int level = 0; level <= n - 1; level++)
        {
            int parrent = current / 2;
            int sibling = parrent * 2 + 1;
            int level_sibling = 31 - __builtin_clz(sibling);
            int height_sibling = n - level_sibling;
            int number_of_leaves = 1 << height_sibling;
            int leftmost_sibling = sibling << height_sibling;
            int start_node = leftmost_sibling;
            int num_1 = number_of_leaves;
            int num_2 = space[level];

            for (int i = 0; i <= num_1 - 1; i++)
            {
                int position = start_node + i;
                if (i < num_2)
                    arr[position] = storage[sign++];
                else
                    arr[position] = kap[kim++];
            }
            if (num_2 > 0)
                upper.insert(parrent);
            current = parrent;
        }
        for (int i = total; i >= 1; i--)
        {
            if (i >= leaves)
                continue;
            int left_node = 2 * i;
            int right_node = 2 * i + 1;
            if (upper.count(i))
                arr[i] = max(arr[left_node], arr[right_node]);
            else
                arr[i] = min(arr[left_node], arr[right_node]);
        }

        for (int i = 1; i <= total; i++)
        {
            if (i > 1)
                cout << " ";
            cout << arr[i];
        }
        cout << endl;
    }
    return 0;
}
