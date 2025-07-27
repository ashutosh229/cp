#include<iostream>
using namespace std;

int main(){
  int k;
  int r;
  cin >> k >> r;
  int x1;
  for (x1 = 1; x1 <= 10; x1++)
  {
    if(k*x1 % 10 == 0)
      break;
    if(k*x1 % 10 == r)
      break;
  }

  cout << x1 << endl;

}