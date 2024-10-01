class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> map;

        for(auto i: arr) map[(i%k + k) % k]++;

        for(auto i: arr) {
            int x = (i%k + k) % k;

            if(x == 0) {
                if(map[x]%2 == 1) return false;
            }
            else if(map[x] != map[k-x]) return false;
        }

        return true;
    }
};
