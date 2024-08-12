class KthLargest {
     int k;
    vector<int> arr;
public:
     KthLargest(int k, vector<int>& nums): k(k) {
        arr = nums;
        nth_element(arr.begin(), arr.begin()+(k-1), 
            arr.end(), greater<>());
        if (arr.size() > k) arr.resize(k);
    }
    
    int add(int val) {
        arr.push_back(val);
        nth_element(arr.begin(), arr.begin()+(k-1), 
            arr.end(), greater<>());
        if (arr.size() > k) arr.pop_back();
        return arr[k-1];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
