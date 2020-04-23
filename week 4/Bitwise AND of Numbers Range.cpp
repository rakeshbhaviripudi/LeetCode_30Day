class Solution {
public:
    int rangeBitwiseAnd_naive(int m, int n) {
        //This solution give TLE
        if(m==0) return 0;
        int i;
        //int ans=1;
        for(i=m+1; i<=n; i++){
            m = m & i;
        }
        return m;
    }
    
    int rangeBitwiseAnd(int m, int n) {
        //if(m== 0) return 0;
        while(m<n){
            n -= (n & -n);
        }
    return n;
    }
};
