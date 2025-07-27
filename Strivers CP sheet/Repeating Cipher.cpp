#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  string t;
  cin >> t;
  string ans = "";
  int adder = 1 ;
  int index = 0;
  while(index<=n-1){
    ans = ans + t[index];
    adder++;
    index = index + adder;
  }
  cout << ans << endl;
  return 0;
}