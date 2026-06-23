// // #include<iostream>
// // using namespace std;
// // #include<vector>

// // int minSubsetSumDifference(const vector<int>& arr) {
// //     int n = arr.size();
// //     int totalSum = 0;
// //     for (int num : arr) {
// //         totalSum += num;
// //     }

// //     // Use dynamic programming to find subset sums close to totalSum / 2
// //     int target = totalSum / 2;
// //     vector<bool> dp(target + 1, false);
// //     dp[0] = true;

// //     for (int i = 0; i < n; ++i) {
// //         for (int j = target; j >= arr[i]; --j) {
// //             dp[j] = dp[j] || dp[j - arr[i]];
// //         }
// //     }

// //     // Find the largest subset sum less than or equal to target
// //     int closestSubsetSum = 0;
// //     for (int j = target; j >= 0; --j) {
// //         if (dp[j]) {
// //             closestSubsetSum = j;
// //             break;
// //         }
// //     }

// //     // Calculate minimal absolute difference
// //     int minimalDiff = abs(totalSum - 2 * closestSubsetSum);
// //     return minimalDiff;
// // }

// // int main(){
// //   int n;
// //   cin>>n;
// //   vector<int> arr(n);
// //   for (int i = 0; i <= n - 1;i++)
// //     cin >> arr[i];
// //   int ans = minSubsetSumDifference(arr);
// //   cout << ans << endl;

// //   return 0;
// // }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// long long recursion(vector<int> weights, int n, int index, int sum1, int sum2){
//   if(index==n){
//     long long ans = abs(sum1-sum2);
//     return ans;
//   }

//   long long takeinsum1 = recursion(weights,n,index+1,sum1+weights[index],sum2);
//   long long takeinsum2 = recursion(weights, n, index + 1, sum1, sum2 + weights[index]);
//   long long ans = min(takeinsum1, takeinsum2);
//   return ans;
// }
// int main(){
//   int n; 
//   cin>>n;
//   vector<int> weights(n,-1);
//   for (int i = 0; i <= n - 1;i++)
//   cin>>weights[i];

//   long long ans = recursion(weights, n, 0, 0, 0);
//   cout << ans << endl;
//   return 0;
// } 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int


ll solve(int idx, vector<ll> weights, ll sum1, ll sum2, ll N)
{
    // If we have reached the end, return the difference
    // between the sums
    if (idx == N) {
        return abs(sum1 - sum2);
    }

    // Choose the current apple in group 1
    ll choose
        = solve(idx + 1, weights, sum1 + weights[idx], sum2, N);

    // Choose the current apple in group 2
    ll notChoose
        = solve(idx + 1, weights, sum1, sum2 + weights[idx], N);

    // Return the minimum of both the choices
    return min(choose, notChoose);
}

int main()
{
    // Sample Input
    int n;
    cin>>n;
    vector<ll> weights(n,-1);
    for (int i = 0; i <= n - 1;i++)
    cin>>weights[i];
    

    // Call the recursive function to find the minimum
    // difference between both the groups
    ll ans = solve(0, weights, 0, 0, n);
    cout << ans;
}
