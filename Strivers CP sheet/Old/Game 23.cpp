#include <iostream>
#include <utility>
using namespace std;

std::pair<int, int> solveExponent(int n) {
    if (n <= 0) {
        // Invalid input handling
        return std::make_pair(-1, -1);
    }

    int alpha = 0;
    int beta = 0;

    // Factor out all 3s from n
    while (n % 3 == 0) {
        n /= 3;
        alpha++;
    }

    // Factor out all 2s from n
    while (n % 2 == 0) {
        n /= 2;
        beta++;
    }

    // If n is reduced to 1, it means n was only composed of 2s and 3s
    if (n == 1) {
        return std::make_pair(alpha, beta);
    } else {
        // There are other prime factors, no solution
        return std::make_pair(-1, -1);
    }
}

int main(){
  int n; //1
  int m; //5
  cin >> n >> m;
  int ans = -1;
  if(n==m)
    ans = 0;
  else if(m%n==0){
    int expo = m / n; 
    pair<int, int> result = solveExponent(expo);
    int alpha = result.first;
    int beta = result.second;
    if(alpha!=-1 && beta!=-1)
      ans = alpha + beta;
    else
      ans = -1;
  }
  cout << ans << endl;
  return 0;
}


