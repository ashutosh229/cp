#include<iostream>
using namespace std;

int main(){
  int a;
  int b;
  cin >> a >> b;
  int low = a;
  int bow = b;
  long long year = 0;
  while(true){
    year++;
    long long lnw = low*3;
    long long bnw = bow * 2;
    if(lnw>bnw)
      break;
    low = lnw;
    bow = bnw;
  }
  cout << year << endl;
  return 0;
}