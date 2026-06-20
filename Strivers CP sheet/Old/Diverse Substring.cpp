// #include<iostream>
// #include<string>
// #include<map>
// using namespace std;

// int main(){
//   int len;
//   cin >> len;
//   string str;
//   cin >> str;
//   map<char, int> freq;
//   for (int i = 0; i < len; ++i)
//   {
//     for (int length = 1; length <= len - i; ++length)
//     {
//       string substring = str.substr(i, length);
//       for (int j = 0; j <= substring.length() - 1;j++){
//         freq[substring[j]]++;
//         if(freq[substring[j]]>(len/2)){
//           cout << "NO" << endl;
        
//         }
//       }
      
//     }
//     }
//     cout << "YES" << endl;
//     int start = 0;
//     int length = n;
//     string substring = str.substr(start, length);
//     return 0;
// }


#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  cin>>n;
  string str;
  cin>>str;
  for (int i = 0; i <= n - 2;i++){
    if(str[i]!=str[i+1]){
      cout << "YES" << endl;
      cout <<str[i]<<str[i+1]<< endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
