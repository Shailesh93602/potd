//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isValid(double maxDis, vector<int> &arr, int k) {
        int n = arr.size();
        int ans = 0;
        
        for(int i=1; i<n; i++) {
            int temp = arr[i]-arr[i-1];
            double points = (double)temp/maxDis;
            ans += (int)points;
        }
        
        return ans <= k;
    }
    double findSmallestMaxDist(vector<int> &stations, int k) {
        // Code here
        int n = stations.size();
        double low = 0;
        double high = stations[n-1]-stations[0];
        double ans = high;
        
        sort(stations.begin(), stations.end());
        
        while(high - low > 1e-6) {
            double mid = low + (high-low)/2;
            
            if(isValid(mid, stations, k)) {
                high = mid;
                ans = mid;
            }
            else low = mid;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> stations(n);
        for (int i = 0; i < n; i++) {
            cin >> stations[i];
        }
        int k;
        cin >> k;
        Solution obj;
        cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k)
             << endl;
    }
    return 0;
}
// } Driver Code Ends
