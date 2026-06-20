// #include<iostream>
// using namespace std;

// int main(){
//   int t;
//   cin>>t;
//   for (int test = 1; test <= t;test++){
//     int x,y,z;
//     cin >> x >> y >> z;
//     i
//     if(y!=z){
//       cout << "NO" << endl;
//     }
//     else{
//       cout << "YES" << endl;
//       int a = ;
//       int b = ;
//       int c = y;
//       cout<<a<<" "<<b<<" "<<c<<endl;


//     }
    
//   }

//     return 0;
// }

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
  int t;
  cin>>t;
  for (int test = 1; test <= t;test++){
    vector<int> input(3);
    for (int i = 0; i <= 2;i++)
    cin>>input[i];

    sort(input.begin(), input.end());
    if(input[1]!=input[2]){
      cout << "NO" << endl;
    }
    else{
      cout << "YES" << endl;
      cout << input[0] << " " << input[0] << " " << input[2] << endl;
   }
  }
    return 0;
}