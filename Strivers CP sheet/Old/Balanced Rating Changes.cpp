#include<iostream>
#include<cmath>
using namespace std;
#include<vector>

int main(){
  int n;
  cin >> n;
  vector<int> ratings(n);
  for (int i = 0; i <= n - 1;i++){
    cin >> ratings[i];
  }

  int flag = 0;
  for (int i = 0; i <= n - 1;i++){
    int rating = ratings[i];
    if(rating%2==0){
      ratings[i] = ratings[i] / 2;
    }
    else{
      double k = static_cast<double>(rating) / 2;
      if(flag==0){
        ratings[i] = ceil(k);
        flag = 1;
      }
      else if(flag==1){
        ratings[i] = floor(k);
        flag = 0;
      }
    }
  }

  for (int i = 0; i <= n - 1;i++){
    cout << ratings[i] << " ";
  }

  cout << endl;

  return 0;
}