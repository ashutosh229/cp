#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string str;
        cin >> n >> str;

        int ans = -1;
        char first_char = str[0];
        char last_char = str[n - 1];
        if (first_char != '1' || last_char != '1')
        {

            cout << ans << endl;
            continue;
        }
        vector<int> result;
        vector<int> start;
        for (int i = 1; i <= n; i++)
        {
            start.push_back(i);
            char current_char = str[i - 1];
            if (current_char == '1')
            {
                while (!start.empty())
                {
                    int last = start.back();
                    result.push_back(last);
                    start.pop_back();
                }
            }
        }
        if (result.size() != n)
        {
            cout << ans << endl;
            continue;
        }
        for (int i = 0; i <= n - 1; i++)
        {
            if (i)
                cout << ' ';
            cout << result[i];
        }
        cout << endl;
    }

    return 0;
}