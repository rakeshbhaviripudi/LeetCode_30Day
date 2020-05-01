class Solution {
public:
    //Greedy algorithm
    Solution() {ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);}
    bool canJump(vector<int>& nums) {
        if(nums.size() < 1) return false;
        if(nums.size() == 1) return true;
        int last_position = nums.size()-1;
        for(int i=nums.size()-1; i>=0 ; i--){
            if(i + nums[i] >= last_position){
                last_position = i;
            }
        }
    return last_position==0;
    }
    
};
