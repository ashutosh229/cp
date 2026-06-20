// // #include<iostream>
// // using namespace std;

// // int main(){
// //   int t;
// //   cin >> t;
// //   for (int test = 1; test <= t;test++){
// //     int x, y, n;
// //     cin>>x>>y>>n;
// //     int start = 0;
// //     int end = n;
// //     int ans = -1;
// //     while(start<=end){
// //       int mid = start + (end - start) / 2;
// //       if(mid%x==y){
// //         ans = mid;
// //         start = mid + 1;
// //       }
// //       else if(mid%x<y){
// //         start = mid + 1;
// //       }
// //       else if(mid%x>y){
// //         end = mid - 1;
// //       }    
// //  }
// //     cout << ans << endl;
// //   }
// //     return 0;
// // }

// #include<iostream>
// using namespace std;

// int main(){
//   int t;
//   cin >> t;
//   for (int test = 1; test <= t;test++){
//     int x;
//     int y;
//     int n;
//     cin >> x >> y >> n;
//     int ans = -1;
//     for (int k = 0; k <= n;k++){
//       if(k%x==y){
//         ans = k;
//       }
//     }
//     cout << k << endl;
//   }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  for (int test = 1; test <= t;test++){
    int x;
    int y;
    int n;
    cin >> x >> y >> n;
    int ans = -1;
    int currem = n%x;
    if(currem==y)
      ans = n;
    else if(currem>y){
      int chahiye = currem - y;
      ans = n - chahiye;
    }
    else if(currem<y){
       ans = n - currem;
       ans = ans - x;
       ans = ans + y;
    }
    cout << ans << endl;
  }
    return 0;
}