
class MinStack {
public:
    /** initialize your data structure here. */
    stack<pair<int,int>>s;
    int minVal;
    MinStack() {
        minVal = INT_MAX;
    }
    
    void push(int x) {     
        if(x< minVal)
            minVal = x;
        s.push({x,minVal});
    }
    
    void pop() {
        s.pop();
        minVal = s.empty()?INT_MAX:s.top().second;
    }
    
    int top() {
       return s.top().first;
    }
    
    int getMin() {
      return  s.top().second;
    }
};

//Solution 2:
//Fast Solution

class MinStack {
public:
    vector< pair<int, int> > mystack;
    int  min_value;
    MinStack() {
          min_value = INT_MAX;
    }
    
    void push(int x) {
        if(mystack.empty()){
            min_value = x;
        }
        if(x<= min_value) min_value =x;
            pair<int,int>temp(x,min_value );
          
           // cout<<temp.first<<" "<<temp.second<<'\n';
            
            mystack.push_back(temp);
           
    }
    
    void pop() {
        if(!mystack.empty()){
            mystack.pop_back();
            min_value = mystack.empty()?INT_MAX:mystack[mystack.size()-1].second;
        }
    }
    
    int top() {
        return mystack[mystack.size()-1].first;
    }
    
    int getMin() {
       return mystack[mystack.size()-1].second;
    }
};


auto speedup=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();










/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
