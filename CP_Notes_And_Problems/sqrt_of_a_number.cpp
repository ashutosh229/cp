#include <bits/stdc++.h>
using namespace std;
const double eps = 1e-6; // for the accuracy of x decimal places, take 1e-(x+1)

double square_root(double target)
{
    double low = 1;
    double high = target;
    double mid;
    double ans;
    while (high - low > eps)
    {
        mid = low + (high - low) / 2;
        // target = f-1(x)
        // f-1(mid) = func_mid

        // if (f-1(mid)>f-1(x)) // f-1 increasing function
        // if (f-1(mid)>target) // f-1 increasing function
        // mid>x
        // high = mid - 1
        if (mid * mid > target)
        {
            high = mid;
            ans = mid;
        }
        // if (f-1(mid)<f-1(x)) // f-1 increasing function
        // if (f-1(mid)<target) // f-1 increasing function
        // mid<x
        // low = mid + 1;
        // ans = mid;
        else if (mid * mid < target)
        {
            low = mid;
            ans = mid;
        }
        // if (f-1(mid)=f-1(x)) // f-1 increasing function
        // if (f-1(mid)=target) // f-1 increasing function
        // mid=x
        // ans = mid;
        // break;
        else
        {
            ans = mid;
            break;
        }
    }

    return ans;
}

int main()
{
    double n;
    cin >> n;
    cout << square_root(n) << endl;
    return 0;
}