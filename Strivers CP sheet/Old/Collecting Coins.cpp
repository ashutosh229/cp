// #include<iostream>
// using namespace std;

// int main(){
//   int t;
//   cin>>t;
//   for (int test = 1; test <= t;test++){
//     int a,b,c,n;
//     cin >> a >> b >> c >> n;
//     int n1num = b - (2 * a) + c + n;
//     int n2num = a + c - (2 * b)+ n;
//     if(n1num%3==0 && n2num%3==0){
//       int n1 = n1num / 3;
//       int n2 = n2num / 3;
//       int n3 = n - (n1 + n2);
//       if(n3>=0)
//       cout<<"YES"<<endl;
//       else
//       cout << "NO" << endl;
//     }
//     else{
//       cout << "NO" << endl;
//     }
//   }
//     return 0;
// }

// //1 1 3 1 //3 //3 //1//1


#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  for (int test = 1; test <= t;test++){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int alpha = c-a;
    int beta = c - b;
    int num2 = (2*beta - alpha + n);
    if(num2%3!=0){
      cout << "NO" << endl;
    }
    else{
      int n2 = num2 / 3;
      int n3 = n2 - beta;
      int n1 = alpha + n3;
      if(n1>=0 && n2>=0 && n3>=0)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
    }
    return 0;
}