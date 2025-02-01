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
    vector<int> getPrimes(int n) {
        // code here
        bool b[n + 1];
        memset(b, true, sizeof(b));

        b[0] = false;
        b[1] = false;

        vector<int> ptr;

        for (int i = 2; i <= sqrt(n); i++)
            for (int j = 2; i * j <= n; j++)
                b[i * j] = false;

        int flag = 0;

        for (int i = 2; i <= n; i++) {
            if (b[i] && b[n - i]) {
                ptr.push_back(i);
                ptr.push_back(n - i);
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            ptr.push_back(-1);
            ptr.push_back(-1);
        }
        return ptr;
    }
    
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        vector<int> res = obj.getPrimes(n);

        Array::print(res);
    }
}

// } Driver Code Ends
