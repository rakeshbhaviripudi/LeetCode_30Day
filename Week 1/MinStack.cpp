
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






/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
