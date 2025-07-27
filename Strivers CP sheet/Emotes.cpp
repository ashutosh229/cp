#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
  int n;
  int m;
  int k;
  cin>>n>>m>>k;
  vector<int> arr(n,0);
  for (int i = 0; i <= n - 1;i++)
    cin >> arr[i];

  sort(arr.begin(), arr.end());
  int max1 = arr[n-1];
  int max2 = arr[n-2];

  int groups = m/(k+1);
  long double groupValue = max1 * k + max2;
  long double ans = groupValue*groups;
  int remaining = m%(k+1);
  long double remainingValue = remaining*max1;
  ans = ans + remainingValue;

  cout << ans << endl;
  return 0;
}
