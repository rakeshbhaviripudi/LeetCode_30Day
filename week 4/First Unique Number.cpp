class FirstUnique {
    list<int>key_list; //stores only keys
    unordered_map<int,list<int>::iterator>mp; 
    public:

    FirstUnique(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        for(auto i: nums){
            add(i);
        }
    }
    
    int showFirstUnique() {  
        if(key_list.size()) return key_list.front();
        else return -1;
    }
    
    void add(int value) {
        if(mp.find(value) != mp.end()){   
            list<int>::iterator it= mp[value];
            if(it != key_list.end()){
                key_list.erase(it);
                mp[value] = key_list.end();
            }
        }
        else{
                key_list.push_back(value);
                list<int>::iterator it = key_list.end();
                it--;
                mp[value] = it;   
            }
    }
    
};
