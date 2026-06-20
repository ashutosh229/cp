// #include<iostream>
// using namespace std;

// int function(int a, int b){
//   //case1
//   if(a==b){
//     return a;
//   }
//   else if(b-a==1){
//     return a;
//   }
//   else if(b-a==2){
//     return (a);
//   }
//   else{
//     return (a);
//   }
// }
// int main(){
//   int t;
//   cin >> t;
//   for (int test = 1; test <= t;test++){
//     int a;
//     int b;
//     int c;
//     int d;
//     cin >> a >> b >> c >> d; //a<=b<=c<=d
//     int x = function(a,b);
//     int y = function(b,c);
//     int z = function(c,d);

//     cout << x << y << z;
//   }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
  int test;
  cin >> test;
  for (int t = 1; t <= test;t++){
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c >> d;
    int x = b;
    int y = c;
    int z = c;
    cout << x << " " << y << " " << z << endl;
  }
    return 0;
}
