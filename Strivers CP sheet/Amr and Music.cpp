// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//   int n;
//   int k;
//   cin >> n >> k;
//   vector<int> days(n + 1, 0);
//   for (int i = 1; i <= n;i++){
//     cin >> days[i];
//   }
//   sort(days.begin(), days.end());
//   vector<int> ans2;
//   int i = 0;
//   for (i = 1; i <= n;i++){
//     int numdays = days[i];
//     if(k<numdays){
//       break;
//     }
//     int leftoverdays = k - numdays;
//     ans2.push_back(i);
//     k = leftoverdays;
//   }
//   int ans1 = i - 1;
//   cout<<ans1<<endl;
//   for(auto value:ans2){
//     cout << value << " ";
//   }
//   cout << endl;

//   return 0;
// }

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool sortByValue(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second;
}

int main(){
  int n;
  int k;
  cin >> n >> k;
  vector<pair<int,int>> days(n);
  int value;
  for (int i = 0; i <= n - 1;i++){
    cin>>value;
    days[i].first = i;
    days[i].second = value;
  }

  sort(days.begin(), days.end(), sortByValue);

  int allowed = k;
  vector<int> ans;
  for (int i = 0; i <= n - 1;i++){
    int index = days[i].first;
    int value = days[i].second;
    if(value>allowed)
    break;

    ans.push_back(index+1);
    allowed = allowed - value;
    }

    cout << ans.size() << endl;
    for(auto value:ans){
      cout << value << " ";
    }
    cout << endl;

    return 0;
}
