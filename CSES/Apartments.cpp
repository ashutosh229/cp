// #include<iostream>
// #include<vector>
// #include<set>
// using namespace std;

// int main(){
//   int n,m,k;
//   cin >> n >> m >> k;
//   set<int> ans;
//   vector<int> apartment(m, 0);
//   for (int i = 0; i <= m - 1;i++){
//     cin>>apartment[i];
//   }
//     for (int i = 1; i <= n; i++)
//     {
//       int size;
//       cin >> size;
//       int min = size - k;
//       int max = size + k;
//       for (int j = 0; j <= m - 1;j++){
//         if(apartment[j]>=min && apartment[j]<=max){
//           ans.insert(j);
//         }
//       }
//     }
//     int x = ans.size();
//     cout << x << endl;
//     return 0;
// }


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n;
  int m;
  int k;
  cin >> n >> m >> k;
  vector<int> applicants(n,0);
  for (int i = 0; i <= n - 1;i++)
  cin>>applicants[i];
  vector<int> apartments(m,0);
  for (int i = 0; i <= m - 1;i++)
  cin>> apartments[i];

  sort(applicants.begin(), applicants.end());
  sort(apartments.begin(), apartments.end());

  int p1 = 0;
  int p2 = 0;
  int ans = 0;

  while(p1<n && p2<m){
    int min = applicants[p1]-k;
    int max = applicants[p1]+k;
    int apartment = apartments[p2];
    if(apartment>=min && apartment<=max){
      ans = ans + 1;
      p1++;
      p2++;
    }
    else if(apartment<min){
      p2++;
    }
    else if(apartment>max){
      p1++;
    }
  }

  cout << ans << endl;
  return 0;
}