// #include<iostream>
// #include <algorithm>
// #include<vector>
// using namespace std;

// bool isAllowed(vector<int> arr){
//   int n = arr.size();
//   n = n - 1;
//   for (int i = 1; i <= n-1;i++){
//     int diff = abs(arr[i] - arr[i - 1]);

//     if (diff == 1)
//       return false;
//   }
//   return true;
// }
// int main(){
//   int n;
//   cin>>n;
//   vector<int> arr(n+1,0);
//   for (int i = 1; i <= n;i++){
//     arr[i] = i;
//   }
//   do {
//         if(isAllowed(arr))
//           break;
//     } while (std::next_permutation(arr.begin(), arr.end()));

// for(auto value:arr){
//   cout << value << " ";
// }
//     return 0;

// }

#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  if(n==2 || n==3){
    cout << "NO SOLUTION" << endl;
  }
  else{
    for (int i = 2; i <= n;i=i+2)
      cout << i << " ";
    for (int i = 1; i <= n;i=i+2)
      cout << i << " ";

    cout << endl;
  }
  return 0;
}