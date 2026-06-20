#include<iostream>
using namespace std;

int main(){
  int ans = 0;
  int x1,x2,x3;
  cin >> x1 >> x2 >> x3;
  int mini = min(x1,x2);
  mini = min(mini,x3);
  int maxi = max(x1,x2);
  maxi = max(maxi, x3);
  int sum = x1 + x2 + x3;
  int mid = sum - mini - maxi;
  ans = abs(mid - mini) + abs(mid - maxi) + 0;
  cout << ans << endl;
  return 0;
}