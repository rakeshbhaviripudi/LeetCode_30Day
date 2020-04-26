class Solution {
public:
    Solution()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        int constrcut_array[m+1][n+1];
        constrcut_array[0][0]= 0;
        for(int i=1; i<=m; i++){
            constrcut_array[i][0] = 0;
        }
        for(int j=1; j<=n; j++){
            constrcut_array[0][j] = 0;    
        }
        for(int i=0; i<m; i++){
            for(int j=0; j< n; j++){
                if(text1[i] == text2[j]){
                    constrcut_array[i+1][j+1] = constrcut_array[i][j]+ 1;
                }
                else{
                    constrcut_array[i+1][j+1] =max(constrcut_array[i+1][j],constrcut_array[i][j+1]);
                }
            }
        }
        // for(int i=0; i<=m; i++){
        //     for(int j=0; j<= n; j++){
        //         cout<< constrcut_array[i][j]<<" ";
        //     }
        //     cout<<'\n';
        // }     
        return constrcut_array[m][n];
    }
};
