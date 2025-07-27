#include<iostream>
using namespace std;
#include<string>

int main(){
  string num;
  cin >> num;
  int len = num.length();
  for (int i = 0; i <= len - 1;i++){
    char digit = num[i];
    if(i==0){
      if(digit>='5'){
        if(digit!='9'){
          digit = '9' - digit + '0';
        }
      }
    }
    else{
      if(digit>='5')
        digit = '9' - digit + '0';
    }
    num[i] = digit;
  }
  cout << num << endl;
  return 0;
}