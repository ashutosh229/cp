#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

int iterativeBinaryExponentiation(int a, int b)
{
    int ans = 1;
    int currentPower = a;
    while (b)
    {
        if (b & 1)
        {
            ans = ans * currentPower;
        }
        currentPower = currentPower * ccurrentPower;
        b = b >> 1;
    }
    return ans;
}

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    int answer = iterativeBinaryExponentiation(a, b);
    cout << answer << endl;
    return 0;
}