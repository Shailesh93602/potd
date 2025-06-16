class Solution {
    int solve(int n, vector<int> &heights, vector<int> &cost, int h) {
        int ans = 0;
        
        for(int i=0; i<n; i++) ans += abs(heights[i] - h) * cost[i];
        
        return ans;
    }
  public:
    int minCost(vector<int>& heights, vector<int>& cost) {
        // code here
        int n = heights.size(), ans = INT_MAX;
        int max_h = *max_element(heights.begin(), heights.end());
        int i = 0, j = max_h + 1;
        
        while(i < j) {
            int mid = i + (j - i) / 2;
            int prevCost = INT_MAX;
            if(mid > 0) prevCost = solve(n, heights, cost, mid - 1);
            
            int currCost = solve(n, heights, cost, mid);
            int nextCost = solve(n, heights, cost, mid + 1);
            
            ans = min(ans, currCost);
            
            if(prevCost <= currCost) j = mid;
            else if(nextCost <= currCost) i = mid + 1;
            else return currCost;
        }

        return ans;
    }
};
