#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, multiset<string>> list;
    while (n--)
    {
        string name;
        int marks;
        cin >> name >> marks;
        list[marks].insert(name);
    }
    int size_list = list.size();
    for (int i = 0; i < size_list; i++)
    {
        auto it = --list.end();
        auto &pr = *it;
        int marks = pr.first;
        auto &names = pr.second;
        if (names.size() == 1)
        {
            cout << (*names.begin()) << " " << marks << endl;
        }
        else
        {
            for (auto &name : names)
            {
                cout << name << " " << marks << endl;
            }
        }

        list.erase(it);
    }
}

// 78 - {Alice,Eve}, 99 - {Bob}