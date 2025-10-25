#include <bits/stdc++.h>
using namespace std;

// Check if a square of side length `side` can fit in the skyline
bool canFitSquare(const vector<long long> &heights, long long side)
{
    long long count = 0;
    for (auto h : heights)
    {
        if (h >= side)
        {
            count++;
            if (count >= side)
                return true; // Found enough contiguous skyscrapers
        }
        else
        {
            count = 0;
        }
    }
    return false;
}

// Binary search the largest possible side, return its area
long long largestSquareArea(const vector<long long> &heights)
{
    long long left = 1, right = *max_element(heights.begin(), heights.end());
    long long best = 0;

    while (left <= right)
    {
        long long mid = left + (right - left) / 2;
        if (canFitSquare(heights, mid))
        {
            best = mid; // mid is possible, try bigger
            left = mid + 1;
        }
        else
        {
            right = mid - 1; // mid not possible, try smaller
        }
    }

    return best * best; // area = side^2
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> CityLine(n);
        for (int i = 0; i < n; i++)
            cin >> CityLine[i];

        cout << largestSquareArea(CityLine) << "\n";
    }

    return 0;
}

// test cases mein 1 output different araha hain  

