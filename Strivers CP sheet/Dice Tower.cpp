// // #include<iostream>
// // using namespace std;

// // int main(){
// //   int test;
// //   cin>>test;
// //   while(test--){
// //     int x;
// //     cin>>x;
// //     if(x==21){
// //       cout << "NO" << endl;
// //       return 0;
// //     }
// //       int n = x - 21;
// //     if(n>0){
// //      int a =  n / 14;
// //      int b = n%14;
// //      int alpha = a + 1;
// //      int blocks = alpha + 1;
// //      int n1 = x-blocks*14;
// //      if(n1>=1 && n1<=6){
// //        cout << "YES" << endl;
// //      }
// //      else{
// //        cout << "NO" << endl;
// //      }
// //     }
// //     else if(n<0){
// //       int rest = x - 14;
// //       if(rest>=1 && rest<=6){
// //         cout << "YES" << endl;
// //       }
// //       else{
// //         cout << "NO" << endl;
// //       }
// //     }
// //   }
// //   return 0;
// // }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//   int t;
//   cin >> t;
//   vector<int> input(t);
//   for (int i = 0; i <= t - 1;i++){
//     cin >> input[i];
//   }
//   for (int i = 0; i <= t - 1;i++){
//     int value = input[i];
//     if(value==21)
//       cout << "NO" << endl;
//     else{
//       if(value<21){
//         int n1 = value-14;
//         if(n1>=1 && n1<=6) cout<<"YES"<<endl;
//         else
//           cout << "NO" << endl;
//       }
//       else{
//         int blocks = value/14;
//         int n1 = value % 14;
//         if(n1>=1 && n1<=6 && blocks>=1)
//           cout << "YES" << endl;
//         else
//           cout << "NO" << endl;
//       }
//     }
//   }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
  long long t;
  cin>>t;
  while(t--){
    long long x;
    cin>>x;
    if(x<=14){
      cout << "NO" << endl;
    }
    else{
long long rem = ((x-14)%14);
    
    if(rem>=1 && rem<=6){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
    }
    
  }
  return 0;
}