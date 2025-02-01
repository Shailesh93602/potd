//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int min_operations(vector<int>& nums) {
        // Code here
        int n = nums.size();
        vector<int> dp(n, 1);
        
        for(int i=1; i<n; i++) {
            int temp = 0;
            for(int j=0; j<i; j++) {
                if(nums[i] > nums[j]) {
                    if(nums[i] - nums[j] > i - j - 1) temp = max(temp, dp[j]);                }
            }
            dp[i] = max(dp[i], 1 + temp);
        }
        
        int maxEle = dp[0];
        for(int i=1; i<dp.size(); i++) {
            maxEle = max(maxEle, dp[i]);
        }
        return n - maxEle;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution ob;
        int ans = ob.min_operations(nums);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends