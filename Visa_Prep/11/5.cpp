#include <bits/stdc++.h>
using namespace std;

int countPairsOneDigitDiff(const vector<int> &arr)
{
    int n = arr.size();
    int d = to_string(arr[0]).size(); // assume all numbers have same digits
    vector<string> sarr;
    for (int num : arr)
        sarr.push_back(to_string(num));

    map<string, int> mp;
    int totalPairs = 0;

    for (auto &s : sarr)
    {
        for (int i = 0; i < d; i++)
        {
            string masked = s;
            masked[i] = '*';          // wildcard for this digit
            totalPairs += mp[masked]; // all previous numbers with same mask differ in exactly this digit
        }
        for (int i = 0; i < d; i++)
        {
            string masked = s;
            masked[i] = '*';
            mp[masked]++;
        }
    }
    return totalPairs;
}

int main()
{
    vector<int> arr = {412, 512, 653};
    cout << countPairsOneDigitDiff(arr) << endl;
    return 0;
}
