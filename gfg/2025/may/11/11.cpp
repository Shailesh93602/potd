//Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

//Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        // code here
        int n = arr.size();

        vector<int> sum(n + 1);
        sum[0] = 0;
        sum[1] = arr[0];
        
        for (int i = 2; i <= n; i++)
            sum[i] = sum[i - 1] + arr[i - 1];

        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                int x = sum[j] - sum[i - 1];

                if (pq.size() < k) pq.push(x);
                else if (pq.top() < x) {
                    pq.pop();
                    pq.push(x);
                }
            }
        }

        return pq.top();
    }
};

//Driver Code Starts


int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        int res = obj.kthLargest(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

//Driver Code Ends