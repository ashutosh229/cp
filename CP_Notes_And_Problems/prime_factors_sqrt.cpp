#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // prime factorization
    vector<int> prime_factors;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            prime_factors.push_back(i);
            n = n / i;
        }
    }
    if (n > 1)
    {
        prime_factors.push_back(n);
    }

    // prime factors
    for (auto &value : prime_factors)
    {
        cout << value << endl;
    }
    return 0;
}
