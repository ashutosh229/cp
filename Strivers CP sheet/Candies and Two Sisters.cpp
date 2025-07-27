#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  for (int test = 1; test <= t;test++){
    int n;
    cin >> n;
    int ans = n-1;
    ans = ans - (n / 2);
    cout << ans << endl;
  }
  return 0;
}