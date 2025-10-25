#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

char nextConsonant(char c)
{
    bool upper = isupper(c);
    c = tolower(c);
    do
    {
        c = (c - 'a' + 1) % 26 + 'a';
    } while (isVowel(c));
    if (upper)
        c = toupper(c);
    return c;
}

string substituteConsonants(const string &s)
{
    string result;
    for (char c : s)
    {
        if (isalpha(c) && !isVowel(c))
            result.push_back(nextConsonant(c));
        else
            result.push_back(c); // vowels or non-alpha stay same
    }
    return result;
}

int main()
{
    string s;
    getline(cin, s);
    cout << substituteConsonants(s) << endl;
    return 0;
}
