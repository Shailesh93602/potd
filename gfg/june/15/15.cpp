//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long solve(char keypad[][3], int n) {
        if (keypad == NULL || n <= 0) return 0;
        if (n == 1) return 10;

        int row[] = {0, 0, -1, 0, 1};
        int col[] = {0, -1, 0, 1, 0};

        long long count[10][n + 1];
        int i = 0, j = 0, k = 0, move = 0, ro = 0, co = 0, num = 0;
        long long nextNum = 0, totalCount = 0;

        for (i = 0; i <= 9; i++) {
            count[i][0] = 0;
            count[i][1] = 1;
        }

        for (k = 2; k <= n; k++) {
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 3; j++) {
                    if (keypad[i][j] != '*' && keypad[i][j] != '#') {
                        num = keypad[i][j] - '0';
                        count[num][k] = 0;
                        for (move = 0; move < 5; move++) {
                            ro = i + row[move];
                            co = j + col[move];
                            if (ro >= 0 && ro <= 3 && co >= 0 && co <= 2 &&
                                keypad[ro][co] != '*' && keypad[ro][co] != '#') {
                                nextNum = keypad[ro][co] - '0';
                                count[num][k] += count[nextNum][k - 1];
                            }
                        }
                    }
                }
            }
        }
        totalCount = 0;
        for (i = 0; i <= 9; i++) totalCount += count[i][n];
        return totalCount;
    }

    long long getCount(int n) {
        // Your code goes here
         char keypad[4][3] = {
            {'1', '2', '3'},
            {'4', '5', '6'},
            {'7', '8', '9'}, 
            {'*', '0', '#'}
         };

        return solve(keypad, n);
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        cout << ob.getCount(n) << "\n";
    }
    return 0;
}

// } Driver Code Ends
