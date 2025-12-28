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

        bool flag = false;
        int safe_number = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            char current_char = str[i];
            if (current_char == '1')
                flag = true;
            else
            {
                if (!flag)
                    safe_number = safe_number + 1;
            }
        }

        cout << safe_number << endl;
    }
    return 0;
}