#include<iostream>
using namespace std;
#include<cmath>
int main(){
  int rows = 5;
  int cols = 5;
  int entry;
  int rowi = 1;
  int coli = 1;
  for (int row = 1; row <= rows;row++){
    for (int col = 1; col <= cols;col++){
      cin >> entry;
      if(entry==1){
        rowi = row;
        coli = col;
      }
    }
  }

  int row_gap = abs(3 - rowi);
  int col_gap = abs(3 - coli);
  int ans = row_gap + col_gap;
  cout << ans << endl;
  return 0;
}