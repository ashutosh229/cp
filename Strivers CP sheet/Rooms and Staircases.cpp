// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;

// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     int n;
//     cin >> n;
//     string stair;
//     cin >> stair;

//     int ans = 0;
//     int one = 0;
//     if (stair[0] == '1' || stair[n - 1] == '1')
//       ans = 2 * n;
//     else
//     {
//       int front = 0;
//       int end = 0;
//       for (int i = 0; i <= n - 1; i++)
//       {
//         if (stair[i] == '1')
//         {
//           one = 1;
//           front = i;
//           break;
//         }
//       }
//       int j = -1;
//       for (int i = n - 1; i >= 0; i--)
//       {
//         j++;
//         if (stair[i] == '1')
//         {
//           one = 1;
//           end = j;
//           break;
//         }
//       }
//       if(one!=1){
//         cout << n << endl;
//       }
//       else{
//         ans = 2 * (n - min(front, end));
//         cout << ans << endl;
//       }
      
      
//     }
//   }
//   return 0;
// }

#include<iostream>
#include<string>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string str;
    cin>>str;

    int left = -1;
    int right = -1;
    for (int i = 0; i <= n - 1;i++){
      if(str[i]=='1'){
        left = i + 1;
        break;
      }
    }

    for (int i = n - 1; i >= 0;i--){
      if(str[i]=='1'){
        right= i + 1;
        break;
      }
    }

    int ans = n;
    if(left!=-1){
      int k = 2*(right-left+1);
      k = k + 2*max(left-1,n-right);
      ans = max(ans, k);
    }

    cout << ans << endl;
  }
  return 0;
}