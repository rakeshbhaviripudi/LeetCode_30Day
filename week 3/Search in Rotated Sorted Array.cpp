class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() < 1) return -1;
        if (nums.size() == 1) {
            return nums[0] == target ? 0 : -1;
        }
        
        int right =nums.size()-1;
        int left = 0;
        int mid;
        while(left <= right){
            mid = (left+right)/2;
            
            int curLeft = nums[left], curRight = nums[right];
            
            if(nums[mid] == target) return mid;
            
            
            
            if(nums[left] <= nums[mid]) {
                if(nums[left] <= target && target < nums[mid])
                    right = mid-1;
                else
                    left = mid+1;
            } 
            
            
            else {
                if(nums[right] >= target && target > nums[mid])
                    left = mid+1;
                else
                    right = mid-1;
            }
            
        }
    return -1;
    }
};
