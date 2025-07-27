#include<iostream>
using namespace std;

int main(){
  int test;
  cin >> test;
  for (int t = 1; t <= test;t++){
    int a;
    int b;
    cin>>a>>b;
    if(((2*a-b)%3==0) && ((2*b-a)%3==0)){
      int alpha = (2*a-b)/3;
      int beta = (2*b-a)/3;
      if(alpha>=0 & beta>=0)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
    else
      cout << "NO" << endl;
  }
    return 0;
}