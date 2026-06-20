#include<iostream>
using namespace std;

int main(){
  int test;
  cin >> test;
  for (int t = 1; t <= test;t++){
    int n;
    cin >> n;
    int ans = 0;
    if(n%2==1)
    ans = (n-1)/2;
    else
      ans = n / 2;

    cout << ans << endl;
  }
    return 0;
}