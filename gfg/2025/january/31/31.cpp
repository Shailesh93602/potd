//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    bool isValid(int i, int j, int num, vector<vector<int>> &mat) {
        for(int x=0; x<9; x++) if(mat[x][j] == num) return false;
        for(int y=0; y<9; y++) if(mat[i][y] == num) return false;
        
        int r = (i/3) * 3, c = (j/3) * 3;
        for(int x=0; x<3; x++) 
            for(int y=0; y<3; y++) 
                if(mat[r + x][c + y] == num) 
                    return false;
        
        
        return true;
    }
    bool solve(vector<vector<int>> &mat) {
        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                if(mat[i][j] == 0) {
                    for(int num=1; num<=9; num++) {
                        if(isValid(i, j, num, mat)) {
                            mat[i][j] = num;
                            
                            if(solve(mat)) return true;
                            mat[i][j] = 0;
                        }
                    }
                    
                    return false;
                }
            }
        }
        
        return true;
    }
  public:
    // Function to find a solved Sudoku.
    void solveSudoku(vector<vector<int>> &mat) {
        // code here
        solve(mat);
    }
};

//{ Driver Code Starts.

vector<int> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    int num;
    vector<int> res;
    while (ss >> num) {
        res.push_back(num);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<vector<int>> grid;
        for (int i = 0; i < 9; i++) {
            vector<int> v = inputLine();
            grid.push_back(v);
        }

        Solution ob;

        ob.solveSudoku(grid);

        for (auto v : grid) {
            for (auto elem : v) {
                cout << elem << " ";
            }
            cout << endl;
        }

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
