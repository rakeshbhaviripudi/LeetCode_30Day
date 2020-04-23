class Solution {
public:
    int rangeBitwiseAnd_naive(int m, int n) {
        if(m==0) return 0;
        if(n-m > 10000000) return 0; //BruteForce Hard Coded.
        int i;
        //int ans=1;
        for(i=n-1; i >=m; i--){
            n = n & i;
        }
        return n;
    }
    
    int rangeBitwiseAnd(int m, int n) {
        //if(m== 0) return 0;
        while(m<n){
            n -= (n & -n);
        }
    return n;
    }
};
