class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        // code here
        int n = arr.size();
        map<int, int> mp;
        
        for(auto i: arr) mp[i]++;
        
        vector<int> ans(n, -1);
        stack<int> st;
        
        for(int i=0; i<n; i++) {
            while(!st.empty() && mp[arr[i]] > mp[arr[st.top()]]) {
                ans[st.top()] = arr[i];
                st.pop();
            }
            
            st.push(i);
        }
        
        return ans;
    }
};
