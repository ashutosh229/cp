#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  cin>>n;
  while(n--){
    long long k;
    long long x;
    cin>>k>>x;
    long long ans = (9 * (k - 1)) + x;
    cout << ans << endl;
  }
  return 0;
}