#include<iostream>
using namespace std;
#include <numeric> // for std::gcd
#include<cctype>

int main(){
  int t;
  cin >> t;
  for (int test = 1; test <= t;test++){
    long long l;
    long long r;
    cin >> l >> r;

    long long x = l;
    long long y = 2 * l;

    if(y<=r)
      cout << x << " " <<y<< endl;
    else
      cout << -1 << " " << -1 << endl;
  
}
return 0;
}