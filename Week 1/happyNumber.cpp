/*
* to check whether is there any existing cycle or not?
* insert the numbers into set, if the previously inserted number is same after squaring * the digits it's a sad number. 
* otherwise it's a happy number :')'
*/

class Solution {
public:
    int sumOfSquare(int n){
        int Sum_Of_Square =0;
        while(n){
            Sum_Of_Square += (n%10)*(n%10);
            n = n/10;
        }
    return Sum_Of_Square;
    }
    bool isHappy(int n){
        set<int> s;
        s.insert(n);
        while(1){
            if(n == 1) return true;
            n= sumOfSquare(n);
            if(s.find(n) != s.end()) return false;
            s.insert(n);   
        }
    return false;
    }
};
