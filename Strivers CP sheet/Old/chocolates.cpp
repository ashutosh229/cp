#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> types(n);
  for (int i = 0; i <= n - 1;i++){
    cin >> types[i];
  }
  long long sum = 0;
  long long need = types[n-1];
  for (int i = n - 1; i >= 0;i--){
    if(types[i]>=need){
      sum = sum + need;
      need = need - 1;

    }
    else{
      sum = sum + types[i];
      need = types[i] - 1;
    }
    if(need==0)
      break;
  }

  cout << sum << endl;

  return 0;
}