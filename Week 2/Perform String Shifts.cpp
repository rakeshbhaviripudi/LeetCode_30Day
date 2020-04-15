class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int totalShift=0;
        for(int i=0; i<shift.size();i++){
            int direction = shift[i][0];
            int amount    = shift[i][1];
            if(direction ==0){
                totalShift -= amount; 
            }
            else totalShift += amount;
        }
        string newFront;
        string newBack;
     //   s = "abcdefg", shift = [[1,1],[1,1],[0,2],[1,3]]
        if(totalShift <0){
            totalShift =abs(totalShift)% s.size();
            newFront = s.substr(totalShift);
            newBack = s.substr(0,totalShift);
        }
        else if(totalShift > 0)
        {
            totalShift = totalShift % s.size();
            newFront=s.substr(s.size()-totalShift);
            newBack =s.substr(0,s.size()-totalShift);
        }
        else return s;
        
        return newFront + newBack;
    }
    
};
