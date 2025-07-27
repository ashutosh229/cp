// // #include<iostream>
// // using namespace std;

// // int main(){
// //   int t;
// //   cin >> t;
// //   for (int test = 1; test <= t;test++){
// //     int a;
// //     int b;
// //     cin >> a >> b;
// //     int ans = 0;
// //     if(a!=b){
// //       if(a>b){
// //         while(true){
// //             int diff = a-b;
// //         if(diff<=10){
// //           ans=ans+1;
// //           break;
// //         }
// //         else{
// //           a = a - 10;
// //           ans++;

// //         }

// //         }

// //       }
// //       else{
// //        while(true){
// //             int diff = b - a;
// //         if(diff<=10){
// //           ans = ans + 1;
// //           break;
// //         }
// //         else{
// //           a = a+10;
// //           ans++;
// //         }
// //        }

// //       }

// //   }
// //   cout << ans << endl;

// //   }
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     int a;
//     int b;
//     cin >> a >> b;
//     int ans = 0;
//     while (a != b)
//     {
//       int diff = abs(b - a);
//       if (diff > 10)
//       {
//         ans = ans + 1;
//         if (a > b)
//           a = a - 10;
//         else
//           a = a + 10;
//       }
//       else
//       {
//         ans = ans + 1;
//         if (a > b)
//           a = a - diff;
//         else
//           a = a + diff;
//       }
//     }
//     cout << ans << endl;
//   }
//   return 0;
// }

#include<iostream>
using namespace std;

int main(){
  int test;
  cin >> test;
  while(test--){
    int a;
    int b;
    cin>>a>>b;
    int diff = abs(a-b);
    int ans = 0;
    if(diff%10==0) ans = diff / 10;
    else ans = (diff / 10) + 1;
    cout << ans << endl;
  }
  return 0;
}