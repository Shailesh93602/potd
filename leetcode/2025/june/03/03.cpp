class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        int n = status.size();
        vector<bool> can_open(n), has_box(n), used(n);

        for(int i=0; i<n; i++) can_open[i] = (status[i] == 1);

        queue<int> q;
        int ans = 0;

        for(int i: initialBoxes) {
            has_box[i] = true;

            if(can_open[i]) {
                q.push(i);
                used[i] = true;
                ans += candies[i];
            }
        }

        while(!q.empty()) {
            int x = q.front();
            q.pop();

            for(int i: keys[x]) {
                can_open[i] = true;

                if(!used[i] && has_box[i]) {
                    q.push(i);
                    used[i] = true;
                    ans += candies[i];
                }
            }

            for(int i: containedBoxes[x]) {
                has_box[i] = true;

                if(!used[i] && can_open[i]) {
                    q.push(i);
                    used[i] = true;
                    ans += candies[i];
                }
            }
        }

        return ans;
    }
};
