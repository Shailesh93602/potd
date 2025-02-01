//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    bool findMatch(vector<vector<char>> &mat, string word, int i, int j, int k) {
        int n = mat.size(), m = mat[0].size();
        
        if(k == word.length()) return true;
        if(i < 0 || j < 0 || i >= n || j >= m) return false;
        
        if(mat[i][j] == word[k]) {
            char temp = mat[i][j];
            mat[i][j] = '#';
            
            bool ans = findMatch(mat, word, i-1, j, k+1) ||
                       findMatch(mat, word, i+1, j, k+1) ||
                       findMatch(mat, word, i, j-1, k+1) ||
                       findMatch(mat, word, i, j+1, k+1);
                       
            mat[i][j] = temp;
            return ans;
        }
        
        return false;
    }
  public:
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code here
        int len = word.length(), n = mat.size(), m = mat[0].size();
        
        if(len > n * m) return false;
        
        for(int i=0; i<n; i++) 
            for(int j=0; j<m; j++) 
                if(mat[i][j] == word[0]) 
                    if(findMatch(mat, word, i, j, 0)) 
                        return true;
        
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        string word;
        cin >> word;
        Solution obj;
        bool ans = obj.isWordExist(mat, word);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
