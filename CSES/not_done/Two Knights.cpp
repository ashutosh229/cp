// #include<iostream>
// using namespace std;

// int main(){
//   int k;
//   cin >> k;
//   for (int n = 1; n <= k;n++){
// long long ans = 0;
//   ans = ans + n * n * ((n * n) - 1);
//   ans = ans - 8;
//   ans= ans - 24;
//   ans = ans - (n-4)*16;
//   ans = ans - 16;
//   ans = ans - (n - 4) * 16;
//   cout << ans << endl;
//   }
    
//   return 0;
// }

#include <iostream>
using namespace std;

// Function to calculate and print the number of ways two
// knights can be placed on a K X K chessboard such that
// they do not attack each other
long calculateWays(int K) {
    // Total number of ways two knights can be placed on
    // the chessboard
    long totalWays = ((long) K * K * (K * K - 1)) / 2;

    // Number of ways two knights can attack each other
    long attackingWays = 4 * (K - 1) * (K - 2);

    // Number of ways two knights can be placed without
    // attacking each other
    long ans = totalWays - attackingWays;

    // Return the result for the current chessboard size K
    return ans;
}

// Driver Code
int main() {
    // Input the value of N (size of the chessboard)
    int N;
    cin >> N;

    // Iterate for all the K sized chessboard
    for (int K = 1; K <= N; K++) {
        cout << calculateWays(K) << " ";
    }

    return 0;
}
