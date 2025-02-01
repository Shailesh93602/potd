//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
  public:
    int MinimumEffort(int rows, int columns, vector<vector<int>> &heights) {
        int N = heights.size(), M = heights[0].size();
                
        priority_queue<pair<int, pair<int, int> >,
            vector<pair<int, pair<int, int> > >,
            greater<pair<int, pair<int, int> > > >
            pq;

        vector<vector<int> > d(N, vector<int>(M, 1e9));
        d[0][0] = 0;
        pq.push({ 0, { 0, 0 } });

        int dx[] = { -1, 0, 1, 0 };
        int dy[] = { 0, 1, 0, -1 };

        while (!pq.empty()) {
            int diff = pq.top().first;
            int r = pq.top().second.first;
            int c = pq.top().second.second;
            pq.pop();
            
            if (r == N - 1 && c == M - 1) return diff;
            for (int i = 0; i < 4; i++) {
                int nx = dx[i] + r;
                int ny = dy[i] + c;

                if (nx >= 0 && nx < N && ny >= 0
                    && ny < M) {
                    int nf = max(abs(heights[r][c] - heights[nx][ny]), diff);

                    if (nf < d[nx][ny]) {
                        d[nx][ny] = nf;
                        pq.push({ nf, { nx, ny } });
                    }
                }
            }
        }
        
        return -1;

    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int rows;
        scanf("%d", &rows);

        int columns;
        scanf("%d", &columns);

        vector<vector<int>> heights(rows, vector<int>(columns));
        Matrix::input(heights, rows, columns);

        Solution obj;
        int res = obj.MinimumEffort(rows, columns, heights);

        cout << res << endl;
    }
}

// } Driver Code Ends
