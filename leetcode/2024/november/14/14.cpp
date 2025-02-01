class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int m = quantities.size();

        auto compare = [](pair<int, int> &a, pair<int, int> &b) {
            return (long long) a.first * b.second <
                    (long long) a.second * b.first;
        };

        vector<pair<int, int>> ans;

        for(int q: quantities) 
            ans.push_back({ q, 1 });

        priority_queue<pair<int, int>, 
                        vector<pair<int, int>>, decltype(compare)> 
                            pq(ans.begin(), ans.begin()+m);

        for(int i=0; i<n-m; i++) {
            pair<int, int> temp = pq.top();
            pq.pop();
            pq.push({ temp.first, temp.second+1});
        }

        pair<int, int> top = pq.top();
        
        return ceil((double) top.first / top.second);
    }
};
