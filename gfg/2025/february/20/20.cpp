//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        vector<int> res;
        vector<double> ans;
        
        for(int i: arr) {
            auto it = lower_bound(res.begin(), res.end(), i);
            res.insert(it, i);
            
            int n = res.size();
            if(n%2 == 0) ans.push_back((res[n / 2 - 1] + res[n / 2]) / 2.0);
            else ans.push_back(res[n / 2]);
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<double> ans = ob.getMedian(nums);
        cout << fixed << setprecision(1);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
