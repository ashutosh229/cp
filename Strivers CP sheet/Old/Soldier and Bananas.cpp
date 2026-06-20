#include<iostream>
using namespace std;

int main(){
  int k;
  int n;
  int w;
  cin>>k>>n>>w;
  int borrow = 0;
  long long price = (k*(w)*(w+1))/2;
  if(price<=n)
  borrow = 0;
  else
    borrow = price - n;

  cout << borrow << endl;
  return 0;
}