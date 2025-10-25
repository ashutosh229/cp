#include <iostream>
#include <vector>
using namespace std;

int firstTripleAboveThreshold(const vector<int> &arr, int threshold)
{
    int n = arr.size();
    for (int i = 0; i + 2 < n; ++i)
    { // ensure i+2 is within bounds
        if (arr[i] > threshold && arr[i + 1] > threshold && arr[i + 2] > threshold)
            return i; // found the first index
    }
    return -1; // no such triple exists
}

int main()
{
    int n, threshold;
    cin >> n >> threshold;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int index = firstTripleAboveThreshold(arr, threshold);
    cout << index << endl;

    return 0;
}

// Find first index i in the array such that arr(i) arr(i + 1) arr(i + 2) all are greater than a threshold  
