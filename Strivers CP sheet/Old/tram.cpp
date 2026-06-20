#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a;
  int b;
  int oldstopcapacity = 0;
  int maxi = 0;
  for (int stop = 1; stop <= n;stop++){
    cin>>a>>b;
    int newcapacity = oldstopcapacity - a;
    newcapacity=newcapacity + b;
    oldstopcapacity = newcapacity;
    maxi = max(maxi, oldstopcapacity);
  }
  cout << maxi << endl;

  return 0;
}