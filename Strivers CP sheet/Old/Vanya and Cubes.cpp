#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int alpha = 1;
  while(true){
    long long N = (((alpha * (alpha + 1) * (2 * alpha + 1)) / 6) + ((alpha * (alpha + 1)) / 2)) / 2;
    alpha++;
    if(N<=n)
    continue;
    else
      break;
  }
  cout << alpha - 1 << endl;
  return 0;
}