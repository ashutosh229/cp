#include<iostream>
using namespace std;

int main(){
  int test;
  cin >> test;
  for (int t = 1; t <= test;t++){
    int a;
    int b;
    int n;
    cin >> a >> b >> n;
    int ans = 0;
    
    if(a<=n && b<=n){
      while(true){
         if(a>b) b = b + a;
      else
        a = a + b;
      ans++;
      if(a>n || b>n)
        break;
      }
      
    }
    cout << ans << endl;
  }
    return 0;
}