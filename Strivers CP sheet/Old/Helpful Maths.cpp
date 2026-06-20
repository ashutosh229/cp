#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  string str;
  cin>>str;
  int n = str.length();
  vector<char> arr;
  if(n==1)
  cout<<str<<endl;
  else{
    for (int i = 0; i <= n - 1;i++){
      if(i%2==0){
        arr.push_back(str[i]);
      }
    }
  }
  sort(arr.begin(), arr.end());
  string ans = "";
  int len = arr.size();
  for (int i = 0; i <= n - 1;i++){
    if(i%2==0){
      int index = i / 2;
    ans  = ans +arr[index];
    }
    else{
      ans = ans + "+";
    }
    
  }

  cout << ans << endl;

  return 0;
}