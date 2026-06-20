// #include<iostream>
// #include<vector>
// #include<cmath>
// #include<algorithm>
// using namespace std;

// bool isRound(int x){
//   if(x/10==0)
//     return true;

//   string num = ""+x;
//   bool flag = true;
//   int len = num.length();
//   for (int i = 0; i <= len - 1;i++){
//     char digit = num[i];
//     if(i>0){
//       if(digit!='0'){
//         return false;
//       }
//     }
//   }
//   return true;
// }
// int main(){
//   int test; 
//   cin >> test;
//   for (int t = 1; t <= test;t++){
//     int n;
//     cin >> n;
//     int num_of_summands = 0;
//     vector<int> arr;
//     if(isRound(n)){
//       num_of_summands = 1;
//       arr.push_back(n);
//     }
//     else{
//       int count = 0;
//       while(n!=0){
//         int digit = n % 10;
//         if(digit!=0){
//           num_of_summands++;
//           arr.push_back(digit * pow(10, count));
//         }
//         count++;
//         n = n / 10;
//       }
//     }

//     cout << num_of_summands << endl;
//     for(auto value:arr){
//       cout << value << " ";
//     }
//   }
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

int main(){
  int test;
  cin >> test;
  for (int t = 1; t <= test;t++){
    vector<int> summands;
    string num;
    cin >> num;
    int len = num.length();
    for (int i = 0; i <= len - 1;i++){
      char digit = num[i];
      int count = len - i - 1;
      if(digit!='0'){
        summands.push_back(digit * pow(10, count));
      }
    }

    int nos = summands.size();
    cout << nos << endl;
    for(auto value:summands){
      cout << value << endl;
    }
  }
    return 0;
}