#include <bits/stdc++.h>
using namespace std;

// modelling the predicate_function
bool is_possible(long long int mid, int n, vector<long long int> &trees_height, int m)
{
    long long int total_wood = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (trees_height[i] >= mid)
        {   
            total_wood = total_wood + (trees_height - mid);
        }
    }
    return total_wood >= m;
}

int main()
{
    int n;
    long long int m;
    cin >> n >> m;

    vector<long long int> trees_height(n);
    for (int i = 0; i <= n - 1; i++)
    {
        long long int x;
        cin >> x;
        trees_height[i] = x;
    }

    // finding the high(stop at the point from where it goes only high)
    long long int high = *max_element(trees_height.begin(), trees_height.end());
    // finding the low(start from the point from where it starts giving true)
    long long int low = 0;
    // declare mid
    long long int mid;
    // initialize ans as the obvious value
    long long int ans = 0;
    // write the condition(depending on the problem statement)
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        // if the predicate_function is true
        if (is_possible(mid, n, trees_height, m))
        {
            ans = mid;     // answer ho sakta hain
            low = mid + 1; // shift towards higher true
        }
        else
        {
            high = mid - 1; // shift towards true
        }
    }
    cout << ans << endl;
    return 0;
}