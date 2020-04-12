class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //create a priority queue
        priority_queue <int> myPQ;
        //push the vector elements to priority queue
        for(auto i: stones) myPQ.push(i);
         while(myPQ.size() > 1)
         {//pop the maxmimum two elements from the Priority queue and 
          // Perform mentioned operation.
             int y = myPQ.top();
             myPQ.pop();
             
             int x = myPQ.top();
             myPQ.pop();
             
             if(y-x >0) myPQ.push(y-x);
         }
        return (myPQ.empty())?0:myPQ.top();
    }
};
