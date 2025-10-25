#include <bits/stdc++.h>
using namespace std;

int minBatteries(vector<int> &powerTime, int T)
{
    sort(powerTime.rbegin(), powerTime.rend()); // use longest batteries first
    int timeCovered = 0;
    int batteriesUsed = 0;

    for (int p : powerTime)
    {
        timeCovered += p;
        batteriesUsed++;
        if (timeCovered >= T)
            return batteriesUsed;
    }

    return -1; // not enough batteries to cover T
}

int main()
{
    int n, T;
    cin >> n >> T;
    vector<int> powerTime(n);
    for (int i = 0; i < n; i++)
        cin >> powerTime[i];

    int res = minBatteries(powerTime, T);
    cout << res << endl;
}

// Some batteries and their charging and power time are given. how many battery will be used to use the phone for t time