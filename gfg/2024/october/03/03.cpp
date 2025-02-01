//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
        int n = nums.size();
        int num1 = 0, num2 = 0;
        int count1 = 0, count2 = 0;
        vector<int> ans;
        
        for(int i: nums) {
            if(i == num1) count1++;
            else if(i == num2) count2++;
            else if(count1 == 0) {
                num1 = i;
                count1 = 1;
            }
            else if(count2 == 0) {
                num2 = i;
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }
        
        count1 = 0, count2 = 0;
        
        for(int i: nums) {
            if(i == num1) count1++;
            else if(i == num2) count2++;
        }
        
        if(count1 > n/3) ans.push_back(num1);
        if(count2 > n/3) ans.push_back(num2);
        if(ans.size() == 0) ans.push_back(-1);
        
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
        vector<int> ans = ob.findMajority(nums);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
