//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int countMin(string str){
    //complete the function here
        int n = str.length();
        int grid[n][n];
        int i;
        int j;
        int gap;
        memset(grid, 0, sizeof(grid));
        
        for(gap=1; gap<n; gap++) {
            for(i=0, j=gap; j<n; i++, j++) {
                if(str[i] == str[j]) grid[i][j] = grid[i+1][j-1];
                else grid[i][j] = (min(grid[i][j-1], grid[i+1][j])+1);
            }
        }
        
        return grid[0][n-1];
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends
