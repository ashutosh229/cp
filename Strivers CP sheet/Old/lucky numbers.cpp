// #include<iostream>
// using namespace std;

// bool isLucky(int x){
//   while(x!=0){
//     int digit = x % 10;
//     if(digit!=4 && digit!=7){
//       return false;
//     }
//     x = x / 10;

//   }
//   return true;
// }
// int main(){
//   int n;
//   cin >> n;
//   int counter = 0;
//   while(n!=0){
//     int digit = n % 10;
//     if(digit==4 || digit==7)
//       counter++;
//     n = n / 10;
//   }
//   if(isLucky(counter))
//     cout << "YES" << endl;
//     else
//       cout << "NO" << endl;


//   return 0;
// }
//40047 //5 //0 se 4 //4 //0 //0 //4 //7

#include<iostream>
#include<string>
using namespace std; 

int main(){
  int counter = 0; //1 //2 //3
  string num;
  cin >> num;
  int len = num.length();
  for (int i = 0; i <= len - 1;i++){
    char digit = num[i];
    if(digit=='4' || digit=='7')
      counter++;
  }
  bool flag = true; //lucky hain
  string lucky = std::to_string(counter);; //3 + "" = "3" //
  int n = lucky.length(); //n=1
  for (int i = 0; i <= n - 1;i++){ //0 se 0
    char digit = lucky[i]; //3
    if(digit!='4' && digit!='7'){ //t and t
      flag = false;               // lucky nahi hain //f;ag =false
      break;
    }
  }
  if(flag==false)
    cout << "NO" << endl;
  else if(flag==true)
    cout << "YES" << endl;

  return 0;
}