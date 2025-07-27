// // #include<iostream>
// // #include<vector>
// // #include<algorithm>

// // using namespace std;

// // int main(){
// //   int n;
// //   int x;
// //   cin >> n >> x;
// //   vector<int> weights(n);
// //   for (int i = 0; i <= n - 1;i++)
// //     cin >> weights[i];

// //   sort(weights.begin(), weights.end());
// //   int ans = 0;
// //   int count = 0;
// //   int allowed = x;
// //   for (int i = 0; i <= n;i++){
// //     int weight = weights[i];
// //     if(weight<=allowed){
// //       count++;
// //       allowed = allowed - weight;
// //     }
// //     if(count==2){
// //       ans = ans + 1;
// //       count = 0;
// //       allowed = x;
// //     }
// //     if(weight>allowed){
// //       count = 0;
// //       ans = ans + 1;
// //       allowed = x;
// //     }
// //   }
// //   ans = ans + 1;
// //   cout << ans << endl;
// //   return 0;
// // }

// #include<vector>
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//   int n;
//   int x;
//   cin>>n>>x;
//   vector<int> weights(n,0);
//   for (int i = 0; i <= n - 1;i++)
//     cin >> weights[i];
  
//   sort(weights.begin(),weights.end());

//   int p1 = 0;
//   int ans = 0;
//   int count = 0;
//   int allowed = x;

//   while(p1<n){
//     int weight = weights[p1];
    
//     if(weight<=allowed){
//        if(count==0){
//           count++;
//           allowed = allowed - weight;
//           p1++;
//           if(p1==n){
//             ans = ans + 1;
//           }
//        }
//        else if(count==1){
//           ans = ans + 1;
//           count = 0;
//           allowed = x;
//           p1++;
//        }
//     }
//     else{
//         if(count==0){
//           p1++;
//         }
//         else if(count==1){
//           ans = ans + 1;
//           count = 0;
//           allowed = x;
//           p1++;
//         }
//     }
//   }

//   cout << ans+1 << endl;

//   return 0;
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n;
  int x;
  cin >> n >> x;
  vector<int> weights(n,0);
  for (int i = 0; i <= n - 1;i++)
    cin >> weights[i];

  sort(weights.begin(), weights.end());

  int p1 = 0;
  int ans = 0;

  while(p1<=n-2){
       int weight_first = weights[p1];
       int weight_second = weights[p1+1];
       if(weight_first+weight_second<=x){
          ans = ans + 1;
          p1 = p1 + 2;
    }
    
    else{
      if(weight_first<=x){
        ans = ans + 1;
        p1++;
      }
    }
  }



  return 0;
}