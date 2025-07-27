#include<iostream>
#include<vector>
#include <algorithm> 
#include <iterator>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> arr(n + 1, 0);
  for (int i = 1; i <= n;i++){
    cin >> arr[i];
  }
  for (int i = 1; i <= n;i++){
    auto it = std::find(arr.begin(), arr.end(), i);
    int index = std::distance(arr.begin(), it);
    cout << index <<" ";
  }
  cout << endl;
  return 0;
}