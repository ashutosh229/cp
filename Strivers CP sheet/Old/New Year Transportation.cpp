#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  int t;
  cin>>n>>t;
  vector<int> arr(n,0);
  for (int i = 1; i <= n - 1;i++)
  cin>>arr[i];
  int celli = 1;
  int cellf = 1;
  bool flag = true;
  while(true){
    cellf = celli + arr[celli];
    if(cellf==t){
      break;
    }
    if(cellf>t){
      flag = false;
      break;
    }
  }
  if(flag==true){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
    return 0;
}