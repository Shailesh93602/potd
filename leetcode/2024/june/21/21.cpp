class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int sum = 0;
        int start = 0;
        int ans = 0;
        
        for(int i=0; i<customers.size(); i++) {
            if(grumpy[i] == 1) sum += customers[i];
            if(i-start+1 == minutes) {
                ans = max(sum, ans);
                if(grumpy[start] == 1) sum -= customers[start];
                start++;
            }
        }
        
        for(int i=0; i<customers.size(); i++) {
            if(grumpy[i] == 0) ans += customers[i];
        }
        return ans;
    }
};
