class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        if(k == 1) return 0;

        vector<int> ans;

        for(int i=0; i<weights.size() - 1; i++) 
            ans.push_back(weights[i] + weights[i + 1]);

        sort(ans.begin(), ans.end());

        long long res = 0;

        for(int i=ans.size() - k + 1; i < ans.size(); i++) res += ans[i];
        for(int i=0; i<k-1; i++) res -= ans[i];

        return res;
    }
};
