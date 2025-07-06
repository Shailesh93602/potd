class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
        // code here
        int n = a.size();
        
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        
        priority_queue<pair<int, pair<int, int>>> pq;
        set<pair<int, int>> s;
        
        pq.push({ a[0] + b[0], { 0, 0 }});
        s.insert({ 0, 0 });
        
        vector<int> ans;
        
        while(ans.size() < k) {
            auto top = pq.top();
            pq.pop();
            
            int sum = top.first, i = top.second.first, j = top.second.second;
            
            ans.push_back(sum);
            
            if(i + 1 < n && s.find({ i + 1, j }) == s.end()) {
                pq.push({ a[i + 1] + b[j], { i + 1, j }});
                s.insert({ i + 1, j });
            }
            
            if(j + 1 < n && s.find({ i, j + 1 }) == s.end()) {
                pq.push({ a[i] + b[j + 1], { i, j + 1 }});
                s.insert({ i, j + 1 });
            }
        }

        return ans;
    }
};
