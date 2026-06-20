#include<iostream>
using namespace std;


int main(){
  int t;
  cin >> t;
  for (int test = 1; test <= t;test++){
    string x;
    cin >> x;
    int target = x[0] - '0';
    int numFamilies = target-1;
    int pressPerFamily = 10;
    int totalPresses = pressPerFamily * numFamilies;
    int len = x.length();
    int adder = (len * (len + 1)) / 2;
    totalPresses = totalPresses + adder;

    cout << totalPresses << endl;
    
  }
    return 0;
}