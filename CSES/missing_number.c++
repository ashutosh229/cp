#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int x;
  long long sum = 0;

  for (int i = 1; i <= n - 1;i++){
     cin>>x;
     sum = sum ^ x;
  }
  int xor2 = 0;
  for (int i = 1; i <= n;i++){
    xor2 = xor2 ^ i;
  }
  int ans = sum^xor2;
  cout << ans << endl;

  return 0;
}