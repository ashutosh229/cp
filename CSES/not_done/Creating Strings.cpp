#include<iostream>
#include <algorithm>
#include <string>
using namespace std;
#include<set>


int main(){
  string str;
  cin>>str;
  int len = str.length();
  set<string> ans;

  sort(str.begin(), str.end());
  ans.insert(str);

  while (next_permutation(str.begin(), str.end())) {
    ans.insert(str);
    }

    cout << ans.size() << endl;
    for (auto value : ans){
      cout<< value << endl;
    }

      return 0;
}