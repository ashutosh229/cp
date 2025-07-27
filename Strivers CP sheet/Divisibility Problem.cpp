// #include<iostream>
// using namespace std;

// int main(){
//   int t;
//   cin >> t;
//   for (int test = 1; test <= t;test++){
//     int a;
//     int b;
//     cin >> a >> b;
//     int ans = 0;
//     if(a%b!=0){
//       if(a>b){
//         while(a%b!=0){
//           a = a + 1;
//           ans = ans + 1;
//         }
//       }
//       else{
//         ans = b - a;
//       }
// }
//   cout << ans << endl;

//   }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
      int a;
      int b;
      cin>>a>>b;
      int ans = 0;
      if(a%b!=0){
         if(a<b){
           ans = b - a;
         }
         else{
          int down = a%b;
          int up = b;
          ans = up - down;

         }
      }
      cout << ans << endl;
  }
  return 0;
}