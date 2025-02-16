class Solution {
    bool solve(vector<int> &ans, vector<bool> &visited, int n , int i) {
        if(i == ans.size()) return true;

        if(ans[i] != 0) return solve(ans, visited, n, i+1);

        for(int j=n; j>=1; j--) {
            if(visited[j]) continue;
            
            visited[j] = true;
            ans[i] = j;

            if(j == 1) {
                 if(solve(ans, visited, n, i+1)) return true;
            } 
            else if(i + j < ans.size() && ans[i + j] == 0) {
                ans[i + j] = j;

                if(solve(ans, visited, n, i+1)) return true;

                ans[i + j] = 0;
            }

            ans[i] = 0;
            visited[j] = false;
        }

        return false;
    }
public:
    vector<int> constructDistancedSequence(int n) {
        vector<int> ans(n * 2 - 1, 0);
        vector<bool> visited(n+1, false);

        solve(ans, visited, n, 0);

        return ans;
    }
};
