class Solution {
/* Actually this is not my solution, i copied it. :) 
*
*
*/
    public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;
        vector<vector<string>> result;
        int i=0;
        for(string s : strs){
            sort(s.begin(), s.end());
            mp[s].push_back(strs[i++]);
        }
        for(auto p : mp){
            sort(p.second.begin(), p.second.end());
            result.push_back(p.second);
        }
        
        return result;
    }
};
auto speedup=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
