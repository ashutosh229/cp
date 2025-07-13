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
    int low = 0;
    int high = n-1;
    int mid;
    while(high-low>1){
        mid = (low + high)/2;
        if(nums[mid]<target){
            low = mid + 1;
        }
        else {
          high = mid;
        }
    }
    if (nums[low]==target)
    cout<<low<<endl;
    if (nums[high]==target)
    cout<<high<<endl;
    
    return 0;
}