// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   char turn = 'm';
//   int type = 0;

//   while(true){
//     if(turn=='m')
//     type = 0;
//   else
//     type = 1;

//   for (int i = 1; i <= n;i++){
//     if(type==0){
//       if(i%2==0){
//         n = n - i;
//       }
//     }
//     else{
//       if(i%2==1){
//         n = n - i;
//       }
//     }
//   }
// }

//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  if(n%2==0) //even
    cout << "Mahmoud" << endl;
  else
    cout << "Ehab" << endl;
  return 0;
}