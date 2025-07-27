#include<iostream>
#include<vector>
using namespace std;

int main(){
  int t;
  cin >> t;
  for (int test = 1; test <= t;test++){
    int n;
    vector<int> nums(n, 0);
    for (int i = 0; i <= n - 1;i++)
      cin >> nums[i + 1];
    int s = size(nums);
    vector<int> ans;
    vector<int> ansnums;
    while(s>1){
      int sum = nums[s - 1] + nums[s - 2];
      ans.push_back(nums[s - 1]);
      ans.push_back(nums[s - 2]);
      nums.pop_back();
      nums.pop_back();
      if(sum%2==0)
        nums.push_back(sum / 2);
      else
        nums.push_back(sum / 2 + 1);
    }

    cout << nums[0] << endl;
    for (int i = 0; i <= size(ans) - 1;i=i+2)
      cout << ans[i] << " " << ans[i + 1] << endl;
  }
    return 0;

}