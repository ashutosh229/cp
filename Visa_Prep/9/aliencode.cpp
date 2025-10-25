#include <bits/stdc++.h>
using namespace std;

int countDivisibleBy3(const string &s)
{
    int n = s.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        // Handle the single '0' case
        if (s[i] == '0')
        {
            count++;
            continue;
        }

        // Skip substrings starting with '0'
        if (s[i] == '0')
            continue;

        int digitSum = 0;
        for (int j = i; j < n; j++)
        {
            digitSum += (s[j] - '0');
            if (digitSum % 3 == 0)
                count++;
        }
    }

    return count;
}

int main()
{
    string s;
    cin >> s;

    cout << countDivisibleBy3(s) << endl;
    return 0;
}

// 2. aliencode - given a numeric string , find the number of substrings divisible by 3. Substrings
// shouldn't start with 0 , but just 0 as a substring is valid. Loose constraints , bruteforce works
// fine.


