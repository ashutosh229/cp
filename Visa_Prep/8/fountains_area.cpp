#include <bits/stdc++.h>
using namespace std;

int minFountainsToActivate(int n, vector<int> &ranges)
{
    vector<int> rightMost(n, 0);

    // Step 1: compute the farthest right coverage for each left point
    for (int i = 0; i < n; i++)
    {
        int left = max(0, i - ranges[i]);
        int right = min(n - 1, i + ranges[i]);
        rightMost[left] = max(rightMost[left], right);
    }

    int fountains = 0;
    int currEnd = 0;
    int nextEnd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > nextEnd)
            return -1; // cannot cover this point
        nextEnd = max(nextEnd, rightMost[i]);
        if (i == currEnd)
        { // need to activate a new fountain
            fountains++;
            currEnd = nextEnd;
        }
    }
    return fountains;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ranges(n);
    for (int i = 0; i < n; i++)
        cin >> ranges[i];

    cout << minFountainsToActivate(n, ranges) << endl;
    return 0;
}

// Similar to that leetcode question of fountains.Kitne fountain khologe toh pura area cover ho jayega  
