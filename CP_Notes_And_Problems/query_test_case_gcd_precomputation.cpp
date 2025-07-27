#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int q;
        cin >> n >> q;
        int a[n + 10];
        int forward_gcd[n + 10];
        int backward_gcd[n + 10];
        forward_gcd[0] = 0;
        backward_gcd[n + 1] = 0;
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            forward_gcd[i] = __gcd(forward_gcd[i - 1], a[i]);
        }
        for (int i = n; i >= 1; i--)
        {
            backward_gcd[i] = __gcd(backward_gcd[i + 1], a[i]);
        }
        while (q--)
        {
            int l;
            int r;
            cin >> l >> r;
            cout << __gcd(forward_gcd[l - 1], backward_gcd[r + 1]) << endl;
        }
    }
    return 0;
}