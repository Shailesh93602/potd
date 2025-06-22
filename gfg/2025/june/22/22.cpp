class Solution {
  public:
    vector<int> largestSubset(vector<int>& arr) {
        // Code here
        int n = arr.size();
        sort(arr.rbegin(), arr.rend());
        
        vector<int> ans(n, 1), parent(n, -1);
        int maxVal = 1, lastIdx = 0;
  	    
  	    for(int i=1; i<n; i++) {
  	        for(int j=0; j<i; j++) {
  	            if(arr[j]%arr[i] == 0 && ans[i] < ans[j] + 1) {
  	                ans[i] = ans[j] + 1;
  	                parent[i] = j;
  	            }
  	        }
  	        
  	        if(ans[i] > maxVal) {
  	            maxVal = ans[i];
  	            lastIdx = i;
  	        }
  	    }
  	    
  	    vector<int> res;
  	    for(int i=lastIdx; i>=0; i=parent[i]) {
  	        res.push_back(arr[i]);
  	        
  	        if(parent[i] == -1) break;
  	    }

        return res;
    }
};
