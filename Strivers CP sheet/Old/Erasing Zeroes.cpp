#include<iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  for (int i = 1; i <= t;i++){
    int first = -1;
    string str;
    cin >> str;
    int len = str.length();
    for (int i = 0; i <= len - 1;i++){
      if(str[i]=='1'){
        first = i;
        break;
      }
    }
    int last = -1;
    for (int i = first + 1; i <= len - 1;i++){
      if(str[i]=='1'){
        last = i;
      }
    }
    int count = 0;
    for (int i = first + 1; i <= last - 1;i++){
      if(str[i]=='0')
        count++;
    }
    cout << count << endl;
  }
}