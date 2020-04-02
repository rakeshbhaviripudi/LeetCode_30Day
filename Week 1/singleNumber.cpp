class Solution {
public:
    //using counting sort:
    //this solution is not accepted because of overflow
     int singleNumber_naive(vector<int>& nums) {
         int n = nums.size();
         vector<int> count_array(n);
         for(int i=0; i< n;i++){
             count_array[nums[i]]++;
         }
         for(int i=0; i< n; i++)
         {
             if(count_array[i]== 1) return i;
         }
         return -1;
         
     }    
    //some what faster
    int singleNumber_slow(vector<int>& nums) {
        map<int, int>m;
        int n = nums.size();
        for(int i =0; i<n; i++){
            m[nums[i]]++;
        }
        for (auto x : m){
            if(x.second == 1) return x.first;
        }
    return -1;
    }
    //optimal solution
     int singleNumber(vector<int>& nums) {
         int ans =0;
         for(int i=0; i<nums.size();i++){
             ans ^= nums[i];
         }
         return ans;
     }
};
