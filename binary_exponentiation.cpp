#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

int binaryExponentiation(int a, int b)
{
    if (b == 0)
        return 1;
    int res = binaryExponentiation(a, b / 2);
    if ((b >> 0) & 1)
    {
        return (a * ((res * 1LL * res) % M) % M);
    }
    else
    {
        return (res * 1LL * res) % M;
    }
}

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    int answer = binaryExponentiation(a, b);
    cout << answer << endl;
    return 0;
}