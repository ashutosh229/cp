#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w;
        int p;
        int k;
        cin >> w >> p >> k;

        int wood = w;
        if (k <= w)
            wood = k;
        int plastic = k - wood;
        int ans = 2 * wood + plastic;
        cout << ans << endl;
    }
    return 0;
}