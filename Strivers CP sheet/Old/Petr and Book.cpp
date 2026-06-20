#include<iostream>
#include<map>
using namespace std;

int main(){
  int n;
  cin >> n;
  map<int, int> mapper;
  for (int i = 1; i <= 7;i++){
    cin >> mapper[i];
  }

  int sum = 0;
  int day = 0;
  while(true){
    for (int i = 1; i <= 7;i++){
      sum = sum + mapper[i];
      if(sum>=n)
      {
        day = i;
        break;
      }
    }
    if(day!=0)
      break;
  }
  cout << day << endl;
  return 0;
}