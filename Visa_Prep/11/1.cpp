// Given a string, return the number of words that start and end with same alphabet

#include <bits/stdc++.h>
using namespace std;

int countWordsSameStartEnd(const string &s)
{
    stringstream ss(s);
    string word;
    int count = 0;

    while (ss >> word)
    {
        char first = tolower(word.front());
        char last = tolower(word.back());
        if (first == last)
            count++;
    }

    return count;
}

int main()
{
    string line;
    getline(cin, line); // read full line (may contain spaces)
    cout << countWordsSameStartEnd(line) << endl;
    return 0;
}
