#include<iostream>
using namespace std;

int main(){
  int n; 
  cin>>n;
  int ans = 0;
  if(n==1)
    ans = 1;
  else{
    int block = 1;
  int options = n; 
  ans = n;
  block = block + 1;
  options = options - 1;
  while(options>1){
    ans = ans + options;
    int adder = options-1;
    int totaladder = adder * (block-1);
    ans = ans + totaladder;
    
    block = block + 1;
    options = options - 1;
  }
  ans = ans + 1;
  }
  
  cout << ans << endl;
  return 0;
}