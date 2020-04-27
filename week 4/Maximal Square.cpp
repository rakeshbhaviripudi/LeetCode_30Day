class Solution {
public:
    Solution() {ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);}
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n= 0;
        if(m !=0) n = matrix[0].size();
        vector<vector<int>> dp(m , vector<int>(n));
        int ans = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==0 || j== 0)
                     if(matrix[i][j] == '0')
                        dp[i][j] =0;  //ch-'0'/
                    else
                        dp[i][j]= 1;
                else if(matrix[i][j] == '1')
                    dp[i][j] = std::min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
                else
                    dp[i][j] == 0;
                
                ans = max(ans,dp[i][j]);
            }
        }
    return ans*ans;
    }
};
