class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int sum =0;
        map<int, int> mp; //sum and sum occurences
      //  mp.insert({0, 1});
        for(int i=0; i< nums.size(); i++){
            sum +=nums[i];
            if(sum == k) count++;
            if(mp[sum-k])
                count += mp[sum-k];
            mp[sum]++;
        }
        return count;
    }
};
