#include<iostream>
#include<cctype>
using namespace std;

int main(){
  string str;
  cin >> str;
  int len = str.length();
  string ans = "";
  for (int i = 0; i <= len - 1;i++){
    if(str[i]=='A' || str[i]=='I' || str[i]=='O' || str[i]=='E' || str[i]=='U' || str[i]=='Y' || str[i]=='a' || str[i]=='e' || str[i]=='u' || str[i]=='i' || str[i]=='o' || str[i]=='y'){
      str[i] = '0';
    }
    else{
        str[i] = tolower(str[i]);
        ans = ans + str[i];
      } 
  }
  
  string answer = "";
  int index = 0;
  while(index<=2*(ans.length())-1){
    if(index%2==0){
      answer = answer + ".";
    }
    else{
      answer = answer + ans[(index - 1) / 2];
    }
    index++;
  }

  cout << answer << endl;
  return 0;
}