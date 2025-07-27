#include<iostream>
#include <cctype> 
using namespace std;

int main(){
  string str;
  cin >> str;
  int n = str.length();
  str[0]=toupper(str[0]);
  cout << str << endl;
  
  return 0;
}