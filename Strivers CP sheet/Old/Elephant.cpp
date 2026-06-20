#include<iostream>
using namespace std;

int main(){
  int x;
  int init = 0;
  int ans = 0;
  if(x<=5){
    ans = ans + 1;
  }
  else{
       while(init<x){
        if(x-init>5){
      ans = ans + 1;
      init = init + 5;
        }
        else{
          init = x;
          ans = ans + 1;
        }
      
    }
    
   
    
  }
  cout << ans << endl;
  return 0;
}