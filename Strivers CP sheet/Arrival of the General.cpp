#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> heights(n + 1, 0);
  for (int i = 1; i <= n;i++){
    cin >> heights[i];
  }

  auto max_it = std::max_element(heights.begin(), heights.end());
  int max_index = std::distance(heights.begin(), max_it);
  int dist1 = max_index - 1;

  auto min_it = std::min_element(heights.begin(), heights.end());
  int min_value = *min_it;
  auto last_min_it = std::find_if(heights.rbegin(), heights.rend(), [min_value](int val) {
        return val == min_value;
    });
  int last_min_index = std::distance(heights.begin(), last_min_it.base()) - 1;
  int dist2 = n - last_min_index;

  int ans = dist1 + dist2;

  cout << ans << endl;

  return 0;
}


