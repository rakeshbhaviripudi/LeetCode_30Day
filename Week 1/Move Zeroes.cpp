class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //int n =nums.size();
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                nums[count] = nums[i];
                count++;
            }
        }
        if(count<= nums.size()-1){
            for(int i=count; i<nums.size(); i++){
                nums[i] =0;
            }
        }
    }
};
