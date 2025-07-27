#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int divisor = min(a, b);
    int dividend = max(a, b);
    int remainder_obtained = dividend % divisor;
    while (remainder_obtained != 0)
    {
        dividend = divisor;
        divisor = remainder_obtained;
        remainder_obtained = dividend % divisor;
    }
    return divisor;
}

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    cout << gcd(a, b) << endl;
    return 0;
}