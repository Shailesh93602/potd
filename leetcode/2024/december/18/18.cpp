class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans;

        for(int i=0; i<n; i++) {
            int minVal = -1;
            
            for(int j=i+1; j<n; j++) {
                if(prices[j] <= prices[i]) {
                    minVal = prices[j];
                    break;
                }
            }

            if(minVal != -1) ans.push_back(prices[i] - minVal);
            else ans.push_back(prices[i]);
        }

        return ans;
    }
};
