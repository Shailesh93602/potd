class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_set<int> s;
        int n = digits.size();

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                for(int k=0; k<n; k++) {
                    if(i == j || j == k || i == k) continue;

                    int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if(num >= 100 && num%2 == 0) s.insert(num);
                }
            }
        }

        vector<int> ans;
        for(int i: s) ans.push_back(i);

        sort(ans.begin(), ans.end());

        return ans;
    }
};
