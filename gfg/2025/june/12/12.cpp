class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        // Code here
        int n = arr.size();
        int i = 0, j = n - 1, pos = -1;
        
        while(i <= j) {
            int mid = (i + j) / 2;
            
            if(arr[mid] < x) {
                pos = mid;
                i = mid + 1;
            } else j = mid - 1;
        }
        
        i = pos, j = pos + 1;
        
        if(arr[j] == x) j++;
        
        vector<int> ans;
        
        while(i >= 0 && j < n && ans.size() < k) {
            if(abs(arr[i] - x) < abs(arr[j] - x)) ans.push_back(arr[i--]);
            else ans.push_back(arr[j++]);
        }
        
        while(i >= 0 && ans.size() < k) ans.push_back(arr[i--]);
        while(j < n && ans.size() < k) ans.push_back(arr[j++]);
    
        return ans;
    }
};
