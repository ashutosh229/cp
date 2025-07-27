#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
  int n,k,l,c,d,p,alpha,beta;
  cin >> n >> k >> l >> c >> d >> p >> alpha >> beta;

  long long x = (k * l) / alpha;
  long long y = (c * d);
  long long z = (p/beta);
  long long maxt = min(x, y);
  maxt = min(maxt, z);
  long long ans  = maxt / n;

  cout << ans << endl;

  return 0;
}