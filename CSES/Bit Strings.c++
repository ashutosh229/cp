#include<iostream>
#include<algorithm>
#include <cmath>
using namespace std;

long long powerOptimised(long long a, long long n, long long mod)
{ 
    // Stores final answer
    long long ans = 1;

    while (n > 0) {
        int last_bit = (n & 1);

        // Check if current LSB is set
        if (last_bit) {
            ans = (ans * a) % mod;
        }

        a = (a * a) % mod;

        // Right shift
        n = n >> 1;
    }

    return ans;
}

int main(){
    long long n;
    cin >> n;
    long long base = 2;
    long long mod = 1e9 + 7;
    long long ans = powerOptimised(base, n, mod);
    cout << ans << endl;
    return 0;
}
