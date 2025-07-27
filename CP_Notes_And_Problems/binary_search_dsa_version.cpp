#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cin>>target;
    int ans = -1;
    int low = 0;
    int high = n-1;
    int mid;
    while(low<=high){
        mid = (low + high)/2;
        if (nums[mid]==target){
            ans = mid;
            break;
        }else if(nums[mid]<target){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}