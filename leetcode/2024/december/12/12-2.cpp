class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq(gifts.begin(), gifts.end());

        for(int i=0; i<k; i++) {
            int top = pq.top();
            pq.pop();

            pq.push(sqrt(top));
        }

        long long ans = 0;
        while(!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }

        return ans;
    }
};
