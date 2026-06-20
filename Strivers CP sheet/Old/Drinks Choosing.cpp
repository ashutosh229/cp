// // // #include <iostream>
// // // using namespace std;
// // // #include <vector>
// // // #include <cmath>
// // // #include <map>
// // // #include <algorithm>

// // // bool compare(const pair<int, int> &a, const pair<int, int> &b)
// // // {
// // //   return a.second > b.second;
// // // }

// // // int main()
// // // {
// // //   int n;
// // //   int k;
// // //   cin >> n >> k;
// // //   map<int, int> hash;
// // //   int value;
// // //   for (int i = 0; i <= n - 1; i++)
// // //   {
// // //     cin >> value;
// // //     hash[value]++;
// // //   }
// // //   vector<pair<int, int>> mapVector(hash.begin(), hash.end());
// // //   sort(mapVector.begin(), mapVector.end(), compare);

// // //   int sets = 0;
// // //   int left = 0;

// // //   if (n % 2 == 0)
// // //   {
// // //     sets = n / 2;
// // //     left = 0;
// // //   }
// // //   else
// // //   {
// // //     sets = ceil(static_cast<double>(n) / 2);
// // //     left = sets * 2 - n;
// // //   }
// // //   int ans = 0;
// // //   for (auto pair : mapVector)
// // //   {
// // //     int type = pair.first;
// // //     int students = pair.second;
// // //     int setsNeeded = ceil(static_cast<double>(students) / 2);
// // //     if (setsNeeded <= sets)
// // //     {
// // //       sets = sets - setsNeeded;
// // //       ans = ans + students;
// // //     }
// // //     else
// // //     {
// // //       int drinks = sets * 2;
// // //       ans = ans + drinks;
// // //       break;
// // //     }
// // //   }

// // //   cout << ans << endl;

// // //   return 0;
// // // }

// // #include <iostream>
// // #include <vector>
// // #include <algorithm>
// // using namespace std;

// // int main()
// // {
// //   int n;
// //   int k;
// //   cin >> n >> k;
// //   vector<int> types(k + 1);
// //   int value;
// //   for (int i = 1; i <= n; i++)
// //   {
// //     cin >> value;
// //     types[value]++;
// //   }
// //   int totalSets = ceil(static_cast<double>(n) / 2);
// //   int totalDrinks = 2 * totalSets;
// //   int drinksNeeded = n;
// //   int left = totalDrinks - drinksNeeded;
// //   int ans = 0;
// //   sort(types.begin(), types.end());
// //   reverse(types.begin(), types.end());
// //   for (auto value : types)
// //   {
// //     int drinksNeeded = value;
// //     int setsNeeded = ceil(static_cast<double>(drinksNeeded) / 2);
// //     totalDrinks = totalDrinks - 2 * setsNeeded;
// //     ans = ans + value;
// //     if (totalDrinks == 0)
// //     {
// //       break;
// //     }
// //   }

// //   cout << ans << endl;

// //   return 0;
// // }

// #include<algorithm>
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//   int n;
//   int k;
//   cin >> n >> k;
//   vector<int> types(k + 1,0);
//   int type;
//   for (int i = 1; i <= n;i++){
//     cin >> type;
//     types[type]++;
//   }
//   sort(types.begin(),types.end());
//   reverse(types.begin(),types.end());
//   int totalSets = ceil(static_cast<double>(n)/ 2);
//   int ans = 0;
//   int index = 0;
//   for (int i = 0; i <= k - 1;k++){
//     if(types[i]==0){
//       break;
//     }
//     else{
//       int drinksNeeded = ceil(static_cast<double>(types[i])/2);
//       if(drinksNeeded<=totalSets){
// totalSets = totalSets- drinksNeeded;
// ans = ans + types[i];
//       }
//       else{
//         index = i;
//       }

//         }
//   }
//     return 0;
// }

#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

int main()
{
  int n;
  int k;
  cin >> n >> k;
  vector<int> types(k + 1, 0);
  int type;
  for (int i = 1; i <= n; i++)
  {
    cin >> type;
    types[type]++;
  }
  int even = 0;
  int odd = 0;
  int totalsets = ceil(static_cast<double>(n) / 2);
  for (int i = 1; i <= k; i++)
  {
    int students = types[i];
    if (students % 2 == 0)
    {
      even = even + students;
    }
    else
    {
      even = even + (students - 1);
      odd = odd + 1;
    }
  }

  int sets = min(even / 2, totalsets);
  int ans = 2*sets;
  totalsets = totalsets - sets;
  if(totalsets>0){
    ans = ans + min(odd, totalsets);
  }

  cout << ans << endl;

  return 0;
}