#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  string str;
  cin >> str;
  int len = str.length();
  if(len==1)
  cout<<1<<endl;
  else{
int count = 1; //2
  char character = str[0]; //A
  int maxi = 0;
  for (int i = 1; i <= len - 1;i++){
    if(str[i]==character)
      count++;
    else{
      maxi = max(maxi, count);
      count = 1;
      character = str[i];
    }
  }
  
  maxi = max(maxi,count);

  cout << maxi << endl;
  }
   
  return 0;
};
