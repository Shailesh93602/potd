class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int ans = INT_MAX, n = tops.size();
        int face[7] = {};

        for(int i=0; i<n; i++) {
            face[tops[i]]++;
            
            if(bottoms[i] != tops[i]) face[bottoms[i]]++;
        }

        for(int i=1; i<=6; i++) {
            if(face[i] < n) continue;

            int top = 0, bottom = 0;
            bool isPossible = true;

            for(int j=0; j<n; j++) {
                if(tops[j] != i && bottoms[j] != i) {
                    isPossible = false;
                    break;
                }
                if(tops[j] != i) top++;
                if(bottoms[j] != i) bottom++;
            }

            if(isPossible) ans = min(ans, (min(top, bottom)));
        }

        if(ans == INT_MAX) return -1;

        return ans;
    }
};
