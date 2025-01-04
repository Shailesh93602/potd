//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
        int n = arr.size(), ans = 0;
        
        for(int i=0; i<n-2; i++) {
            int j = i+1, k = n-1;
            
            while(j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                
                if(sum == target) {
                    int left = arr[j], right = arr[k];
                    int count1 = 0, count2 = 0;
                    
                    while(j <= k && arr[j] == left) {
                        j++;
                        count1++;
                    }
                    
                    while(j <= k && arr[k] == right) {
                        k--;
                        count2++;
                    }
                    
                    if(left == right) ans += (count1 * (count1 - 1)) / 2;
                    else ans += (count1 * count2);
                }
                else if(sum < target) j++;
                else k--;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends
