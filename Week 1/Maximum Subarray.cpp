//Called as Kadane algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int over_all_max= INT_MIN, Maximum_at_the_element=0;
        for(int i=0; i<nums.size();i++){
            Maximum_at_the_element = Maximum_at_the_element+ nums[i];
            
            if(over_all_max < Maximum_at_the_element){
                over_all_max = Maximum_at_the_element;
            }
            
            if(Maximum_at_the_element < 0){
                Maximum_at_the_element =0;
            }
        }
    return over_all_max;
    }
};
