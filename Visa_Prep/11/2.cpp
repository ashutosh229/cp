#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

string removeVowelsAndReverse(const string &s)
{
    string filtered;
    for (char c : s)
    {
        if (!isVowel(c))
            filtered.push_back(c);
    }
    reverse(filtered.begin(), filtered.end());
    return filtered;
}

int main()
{
    string s;
    getline(cin, s);
    cout << removeVowelsAndReverse(s) << endl;
    return 0;
}
