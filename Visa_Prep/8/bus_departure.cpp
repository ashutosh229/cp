#include <bits/stdc++.h>
using namespace std;

int lastBusBeforeTime(const vector<int> &busTimes, int currentTime)
{
    int n = busTimes.size();
    int left = 0, right = n - 1;
    int ans = -1; // -1 if no bus has departed before currentTime

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (busTimes[mid] <= currentTime)
        {
            ans = mid;      // possible candidate
            left = mid + 1; // try to find a later bus before currentTime
        }
        else
        {
            right = mid - 1;
        }
    }

    return ans == -1 ? -1 : busTimes[ans];
}

int main()
{
    int n, time;
    cin >> n >> time;
    vector<int> busTimes(n);
    for (int i = 0; i < n; ++i)
        cin >> busTimes[i];

    // Ensure bus times are sorted
    sort(busTimes.begin(), busTimes.end());

    int result = lastBusBeforeTime(busTimes, time);
    cout << result << endl;

    return 0;
}

// You're given array of timings of bus departure and a random time. you have to find the time since last bus departed before that given time
