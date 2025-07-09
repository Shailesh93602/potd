class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> ans(n, 0), right(n), st;
        
        for(int i=0; i<n; i++) right[i] = i;
        
        for(int i=0; i<n; i++) {
            while(!st.empty() && arr[i] < arr[st.back()]) {
                right[st.back()] = i;
                st.pop_back();
            }
            
            st.push_back(i);
        }

        ans[n - 1] = arr[n - 1];
        
        for(int i=n-2; i>=0; i--) {
            int r = right[i];
            
            if(r == i) ans[i] = (n - i) * arr[i];
            else ans[i] = (r - i) * arr[i] + ans[r];
        }

        return accumulate(ans.begin(), ans.end(), 0);
    }
};
