#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    int y;
    cin >> x >> y;

    int resultant = x * y;
    int threshold = 100;
    string ans = "No";
    if (resultant >= threshold)
        ans = "Yes";
    cout << ans << endl;
    return 0;
}