#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>

int main(){
  int test;
  cin>>test; 
  for (int t = 1;t<=test;t++){ 
    int n;
    cin >> n; 
    int size = 2*n;
    vector<int> skills(size,0);
    for(int i=0;i<=size-1;i++)
    {
      cin >> skills[i];
    }
    sort(skills.begin(),skills.end());
    int ans = skills[n] - skills[n - 1];
    cout << ans << endl;
  }

  return 0;

}