#include<iostream>
using namespace std;

int main(){
  bool flag = false;
  string table;
  cin >> table;
  char table_rank = table[0];
  char table_group = table[1];
  string hand;
  for (int i = 1; i <= 5;i++){
    cin >> hand;
    char hand_rank = hand[0];
    char hand_group = hand[1];
    if(hand_rank == table_rank || hand_group == table_group)
    {
        flag = true;
        break;
    }
  }
  if(flag==true)
    cout << "YES" << endl;
    else
      cout << "NO" << endl;

    return 0;
}