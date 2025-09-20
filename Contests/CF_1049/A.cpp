#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int result = 0;
        int n;
        string str;
        cin >> n >> str;
        int zero_counter = count(str.begin(), str.end(), '0');
        for (int i = 0; i <= zero_counter-1; i++){
            if (str[i] == '1')
            {
                result = result + 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}