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
        vector<int> arr(n);
        for (int i = 0; i <= n - 1; i++)
        {
            int x;
            cin >> x;
            arr[i] = x;
        }

        vector<int> result(n - 2);
        for (int i = 0; i <= n - 1; i++)
        {
            if (i + 2 > (n - 1))
            {
                break;
            }
            int first = arr[i];
            int second = arr[i + 1];
            int third = arr[i + 2];
            bool increasing = first < second && second < third;
            bool decreasing = first > second && second > third;
            if (increasing || decreasing)
            {
                result[i] = 1;
            }
            else
            {
                result[i] = 0;
            }
        }

        for (int i = 0; i <= (result.size() - 1); i++)
        {
            cout << result[i] << " ";
        }

        cout << endl;
    }
}

// done  
