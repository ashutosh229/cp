#include <iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

int main(){
  int k;
  cin >> k;
  string str;
  cin >> str;
  int len = str.length();

  map<char, int> hash;
  for (int i = 0; i <= len - 1;i++){
    char letter = str[i];
    hash[letter]++;
  }
  
  int ans = 0;
  vector<string> arr(k);
  for(auto pair:hash){
    char letter = pair.first;
    char num = pair.second;
    if(num%k!=0){
      ans = -1;
      break;
    }
    else{
      int freq = num / k;
      while(freq--){
        for (int i = 0; i <= k - 1;i++){
          arr[i] = arr[i] + letter;
         }
      }
    }
  }

  if(ans==-1){
    cout << ans << endl;
  }
  else{
  
    string final = "";
    for (int i = 0; i <= k - 1;i++){
      final = final + arr[i];
    }
    cout << final << endl;
  }


  return 0;
}