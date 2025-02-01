//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        vector<pair<int, int>> map;
        vector<int> visited(n);
        
        for(int i=0; i<n; i++) {
            if(arr[i] - k >= 0) 
                map.push_back({ arr[i] - k, i });
            map.push_back({ arr[i] + k, i });
        }
        
        sort(map.begin(), map.end());
        int i=0, j=0, x=0;
        
        while(x < n && j < map.size()) {
            if(visited[map[j].second] == 0) x++;
            visited[map[j].second]++;
            j++;
        }
        
        int ans = map[j-1].first - map[i].first;
        int ans = map[j-1].first - map[i].first;
        
        while(j < map.size()) {
            if(visited[map[i].second] == 1)
                x--;
            visited[map[i].second]--;
            i++;
            
            while(x < n && j < map.size()) {
                if(visited[map[j].second] == 0)
                    x++;
                visited[map[j].second]++;
                j++;
            }
            
            if(x == n) 
                ans = min(ans, map[j - 1].first -map[i].first);
            else break;
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
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
        cout << '~' << endl;
    }
    return 0;
}
// } Driver Code Ends
