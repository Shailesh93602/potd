class Solution {
  public:
    vector<int> leafNodes(vector<int>& preorder) {
        // code here
        stack<int> s;
        vector<int> ans;
        int n = preorder.size();
        
        for(int i=0, j=1; j<n; i++, j++) {
            bool found = false;
            
            if(preorder[i] > preorder[j]) s.push(preorder[i]);
            else {
                while(!s.empty()) {
                    if(preorder[j] > s.top()) {
                        s.pop();
                        found = true;
                    } else break;
                }
            }
            
            if(found) ans.push_back(preorder[i]);
        }
        
        ans.push_back(preorder[n - 1]);
        
        return ans;
    }
};
