#include<iostream>
using namespace std;

int main(){
  int test;
  cin >> test;
  for (int t = 1; t <= test;t++){
    int rows;
    int cols;
    cin >> rows >> cols;
    int part1 = 0;
    int part2 = 0;
    if(cols%2==1){
      part1 = ((cols - 1) / 2) * rows;
      if(rows%2==0){
      part2 = rows / 2;
    }
    else{
      part2 = rows / 2 + 1;
    }
    }
    else{
      part1 = (cols / 2) * rows;
      part2 = 0;
    }
    
    int ans = part1 + part2;
    cout << ans << endl;
  }
    return 0;
}