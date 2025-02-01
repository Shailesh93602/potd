//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int INF = 999999999;
    vector<int> val, wt;
    vector<vector<int>> memo;

    int minCostHelper(int n, int w) {
        if (w == 0) return 0; 
        if (w < 0) return INF;
        
        if (memo[n][w] != -1) return memo[n][w];

        int result = INF;

        for (int i = 0; i < n; i++) {
            if (wt[i] <= w) {
                result = min(result, minCostHelper(n, w - wt[i]) + val[i]);
            }
        }

        return memo[n][w] = result;
    }
    int minimumCost(int n, int w, vector<int> &cost) {
        // code here
        for (int i = 0; i < n; i++) {
            if (cost[i] != -1) {
                val.push_back(cost[i]);
                wt.push_back(i + 1);
            }
        }

        memo = vector<vector<int>>(val.size() + 1, vector<int>(w + 1, -1));

        int result = minCostHelper(val.size(), w);
        return (result == INF) ? -1 : result;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int w;
        scanf("%d", &w);

        vector<int> cost(n);
        Array::input(cost, n);

        Solution obj;
        int res = obj.minimumCost(n, w, cost);

        cout << res << endl;
    }
}

// } Driver Code Ends
