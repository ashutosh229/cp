#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int test;
  cin>>test;
  for (int t = 1; t <= test;t++){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int ans1 = -1;
    int ans2 = -1;
    int xmax = 1e9;
    int xmin = 1;
    int x = xmin;
    while(x<=xmax){
      long long p1 = a * x;
      long double input = static_cast<double>(x) / b;
      long long p2 = ceil(input) * c;
      if(p1<p2){
        ans1 = x;
      }
      if(p2<p1){
        ans2 = x;
      }
      if(ans1!=-1 && ans2!=-1){
        break;
      }
      x++;

    }
    cout<<ans1<<" "<<ans2<<endl;

  }
    return 0;
}