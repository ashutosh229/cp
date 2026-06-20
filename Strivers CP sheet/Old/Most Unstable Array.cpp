#include<iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  for (int test = 1; test <= t;test++){
    int n;
    int m;
    cin >> n >> m;
    long long ans = -1;
    //length of the array should be n 
    //non negative integers should be within the array 
    //sum of the elements should be exactly m 
    //sum of modular differences between adjacent elements should be max 
    //print this modular difference sum as the answer
    if(n==1){
      ans = 0;
    }
    else if(n==2){
      ans = m;
    }
    else{
      ans = 2 * m;
    }

    cout << ans << endl;
  }
    return 0;
}