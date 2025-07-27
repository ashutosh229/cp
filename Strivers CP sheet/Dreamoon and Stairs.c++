#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
  int n;
  int m;
  cin >> n >> m; //10 //2
  int n1 = 0;
  int n2 = 0;
  int dest = n - 1; //9
  int ans = 0;
  int minans=INT_MAX;
  bool flag =false;
  for (int i = 0; i <= dest;i++){
    int other = dest-i;
    if(other%2==0){
      n1 = i;//2
      n2 = other / 2; //0
      ans = n1+n2;//2
      if(ans%m==0){
         minans = min(minans,ans);
         flag = true;
      }
    }
  }
  if(flag==false){
      minans = -1;
  }
  cout << minans << endl;
  return 0;
}