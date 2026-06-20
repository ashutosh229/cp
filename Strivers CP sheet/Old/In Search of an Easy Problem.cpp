#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int level;
  int hardness = 0;
  for (int i = 1; i <= n;i++){
    cin >> level;
    if(level==1){
      hardness = 1;
      break;
    }
  }
  if(hardness==1)//hard
    cout << "HARD" << endl;
  else
    cout << "EASY" << endl;

    return 0;
}