class Solution {
    /* THIS SOLUTION(backspaceCompare) IS NOT OPTIMAL, THIS GIVES O(N) TIME COMPLEXITY BUT NOT O(1)
    *  SPACE COMPLEXITY. IT WILL TAKE APPROX. O(N) SPACE COMPLEXITY.
    *
    */
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s;
        stack<char> t;
        for(int i=0; i<S.length();i++){
            if(S[i] != '#') s.push(S[i]);
            if(S[i] == '#'){
                if(s.empty()) continue;
                else{
                    s.pop();
                }
            }
        }
         for(int i=0; i<T.length();i++){
            if(T[i] != '#') t.push(T[i]);
            if(T[i] == '#') {
                if(t.empty())continue;
                else{
                    t.pop();
                }
            }
        }
        if(s.size() != t.size()) return false;
        
        bool flag = true;

        while(s.empty() == false){
             cout<<s.top()<<" "<<t.top();
            if(s.top() == t. top()){
                s.pop();
                t.pop();
            }
            else { 
                 cout<<s.top()<<" "<<t.top();
                flag = false; 
                break; 
            } 
        }
        
    return flag;
    }
};
