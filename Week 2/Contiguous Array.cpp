class Solution {
public:
//     int findMaxLength_1(vector<int>& nums) {
//         int maxlen =0;
//         for(int i=0; i<nums.size();i++){
//             int zeroes=0; 
//             int ones =0;
//             for(int j=i; j<nums.size();j++){
//                 if(nums[j] == 0){
//                     zeroes++;
//                 }
//                 else ones++;
                
//                 if (zeroes == ones) maxlen = max(maxlen, j - i + 1);
//             }
           
//         }
//     return maxlen;
//     }
     int findMaxLength(vector<int>& nums) {
         int count= 0;
         int maxlen=0;
         map<int, int> mp;
         mp.insert({0,-1});
         for(int i=0; i<nums.size(); i++){
             if(nums[i] == 0) count -= 1;
             else count += 1;
             if(mp.find(count) != mp.end()){
                 auto it = mp.find(count);
                 maxlen = max(maxlen ,i - (it->second));
             }
             else {
                 mp.insert({count,i});
             }
         }
    return maxlen;
     }
};

auto speedup=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
