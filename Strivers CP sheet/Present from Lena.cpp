#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  //section 1: upper patter and middle line
  for (int i = 0; i <= n ;i++){
    for (int j = 1; j <= n - i;j++)
      cout << " " << " ";
    cout << 0 << " ";
    for (int j = 1; j <= i - 1;j++)
      cout << j << " ";
    cout << i << " ";
    for (int k = i - 1; k >= 1;k--)
      cout << k << " ";
    cout << 0 << " ";
    for (int j = 1; j <= n - i;j++)
      cout << " " << " ";
    

      cout << endl;
  }
  
  // section 2: lower pattern
  for (int i = n - 1; i >= 0;i--){
     for (int j = 1; j <= n - i;j++)
      cout << " " << " ";
    cout<<0<<" ";
    for (int j = 1; j <= i - 1;j++)
    cout<<j<<" ";
    cout<<i<<" ";
    for (int j = i - 1; j >= 1;j--)
    cout<<j<<" ";
    cout << 0 << " ";
    for (int j = 1; j <= n - i;j++)
      cout << " " << " ";

    cout << endl;
  }
    return 0;
}