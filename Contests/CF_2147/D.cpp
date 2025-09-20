#include <bits/stdc++.h>
using namespace std;

bool comparator(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first)
    {
        return a.first > b.first;
    }
    return a.second > b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> hash;
        for (int i = 0; i <= n - 1; i++)
        {
            int x;
            cin >> x;
            hash[x]++;
        }
        vector<pair<int, int>> slots;
        for (auto &freq_pair : hash)
        {
            int first_slot = freq_pair.second;
            int second_slot = freq_pair.first;
            slots.push_back({first_slot, second_slot});
        }
        sort(slots.begin(), slots.end(), comparator);
        long long alice_ans = 0;
        long long bob_ans = 0;
        int flag = 0;
        for (auto &slot : slots)
        {
            int current = slot.first;
            int leftover = slot.second;
            long long alice = (leftover * 1LL + (flag == 0)) / 2;
            long long bob = leftover - alice;
            alice_ans = alice_ans + (alice*current);
            bob_ans = bob_ans + (bob*current);
            if (leftover & 1){
                flag = flag^1;
            }   
        }
        cout << alice_ans << ' ' << bob_ans << endl;
    }
    return 0;
}