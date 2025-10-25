#include <bits/stdc++.h>
using namespace std;

int findSmallestLocalMaximum(vector<int> &arr)
{
    int n = arr.size();
    vector<int> localMax;

    if (n == 1)
        return arr[0]; // single element is trivially a local max

    // Check first element
    if (arr[0] > arr[1])
        localMax.push_back(arr[0]);

    // Check middle elements
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            localMax.push_back(arr[i]);
        }
    }

    // Check last element
    if (arr[n - 1] > arr[n - 2])
        localMax.push_back(arr[n - 1]);

    if (localMax.empty())
        return -1;

    return *min_element(localMax.begin(), localMax.end());
}

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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << findSmallestLocalMaximum(arr) << "\n";
    }
    return 0;
}

// giving wrong answer on the last test case  