class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid;
        int first = -1;
        int last = -1;
        while(low<=high){
            mid = low + (high-low)/2;
            if (target==nums[mid]){
                first = mid;
                high = mid-1;
            }
            else if (target<nums[mid]){
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        low = 0;
        high = n-1;
        while(low<=high){
            mid = low+(high-low)/2;
            if (target==nums[mid]){
                last = mid; 
                low = mid+1;
            }
            else if (target<=nums[mid]){
                high= mid-1;
            }
            else {
                low = mid+1;
            }
        }

        vector<int> result = {first,last}; 
        return result;
    }
};