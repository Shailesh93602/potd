//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int count = 0, n = arr.size();
        int i=0, j=n-1;
        
        while(i < j) {
            int sum = arr[i] + arr[j];
            
            if(sum == target) {
                int count1 = 0, count2 = 0;
                int first = arr[i], second = arr[j];
                
                while(i <= j && arr[i] == first) {
                    i++;
                    count1++;
                }
                
                while(i <= j && arr[j] == second) {
                    j--;
                    count2++;
                }
                
                if(first == second) 
                    count += (count1 * (count1-1)) / 2;
                else count += (count1 * count2);
            }
            else if(sum < target) i++;
            else j--;
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends
