#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  for (int test = 1; test <= t;test++){
    int n;
    int x;
    cin>>n>>x;
    int ans = 0;
    if(n==1 || n==2)
      ans = 1;

    int f = 2;
    while(true){
      long long start =(f-2)*x + 3;
      long long end = (f-1)*x + 2;
      if(start<=n && n<=end){
         ans = f;
         break;
      }
      f++;
    }

    cout << ans << endl;
  }
    return 0;
}