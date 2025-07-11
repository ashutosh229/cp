#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;
    long long int nums[n + 10];
    for (int i = 1; i <= n; i++)
    {
        nums[i] = 0;
    }
    while (m--)
    {
        int a;
        int b;
        int k;
        cin >> a >> b >> k;

        for (int i = a; i <= b; i++)
        {
            nums[i] = nums[i] + k;
        }
    }

    auto [min_element, max_element] = minmax_element(nums + 1, nums + n);
    cout << *max_element << endl;
    return 0;
}

//time complexity is O(mn)