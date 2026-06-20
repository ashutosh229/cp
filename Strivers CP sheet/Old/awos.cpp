#include<iostream>
#include<vector>
#include <numeric>
using namespace std;

int main(){
  int t;
  cin>>t;
  for (int test = 1; test <= t;test++){
    int even=0;
    int odd = 0;
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i <= n-1;i++)
    {
          cin>>arr[i];
          if(arr[i]%2==0)
            even++;
          else
            odd++;
    }
    
    

    int sum = std::accumulate(arr.begin(), arr.end(), 0);
    if(sum%2==1){
      cout << "YES" << endl;
    }
    else{
      if(odd==0 || even==0)
        cout << "NO" << endl;
      else
        cout << "YES" << endl;
    }
  }
    
}