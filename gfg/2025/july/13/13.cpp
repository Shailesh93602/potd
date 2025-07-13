class Solution {
    map<int, vector<int>> mp;
    
    void insert(int val) {
        auto it = mp.lower_bound(val);
        int n = 1, sum = val;
        
        if(it != mp.begin()) {
            auto prev = it;
            prev--;
            n = prev->second[0] + 1;
            sum = prev->second[1] + val;
        }
        
        vector<int> temp;
        
        while(it != mp.end()) {
            if(it->second[0] > n) break;
            
            temp.push_back(it->first);
            it++;
        }
        
        for(int i: temp) mp.erase(i);
        
        mp[val] = { n, sum };
    }
  public:
    int nonLisMaxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        for(int &i: arr) insert(i);
        
        auto last = --mp.end();
        
        return accumulate(arr.begin(), arr.end(), 0) - last->second[1];
    }
};
