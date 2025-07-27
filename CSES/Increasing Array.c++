#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  cin >> n;
  long long count = 0;
  vector<int> arr(n);
  for (int i = 0; i <= n - 1;i++){
    cin>>arr[i];
  }
  for (int i = 1; i <= n - 1;i++){
    int element = arr[i];
    int prev = arr[i - 1];
    if(prev>element){
      int gap = prev - element;
      count = count + gap;
      arr[i] = arr[i - 1];
    }
  }

  cout << count << endl;
  return 0;
}