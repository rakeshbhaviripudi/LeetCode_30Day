class Solution {
    /*
    Infact both the methods are written in O(n). i feel countElements method is little efficient than countElements_Naive
    */
public:
    int min(int a, int b){
        if(a < b ) return a;
        else return b;
    }
    //Order of n solution is not accepted.
    int countElements_Naive(vector<int>& arr) {
        int n = arr.size();
        vector<int> count(n+1);
         for(int i=0; i<=n; i++){
             count[i] = 0;
         }
        for(int i=0; i<n; i++){
            count[arr[i]]++;
        }
        int ans=0;
        for(int i=0; i<n; i++){
            if(count[i] != 0 )
                if(count[i+1] != 0){
                    ans += count[i];
                }
            }
    return ans;
    }
    
    int countElements(vector<int>& arr){
         unordered_set<int>us;
         int ans=0;
         us.insert(arr.begin(), arr.end());
         for(int i=0; i<arr.size(); i++){
            if(us.find(arr[i]+ 1)!= us.end()) ans++; 
         }
    return ans;
     }
    
};
