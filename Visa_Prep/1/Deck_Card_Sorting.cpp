#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> deck(n);
        for (int i = 0; i < n; i++)
        {
            cin >> deck[i];
        }

        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (deck[i] == 1)
            {
                pos = i;
                break;
            }
        }

        bool valid = true;
        for (int i = 0; i < n; i++)
        {
            if (deck[(i + pos) % n] != i + 1)
            {
                valid = false;
                break;
            }
        }

        if (valid)
        {
            cout << pos << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}
