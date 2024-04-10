class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        reverse(deck.begin(), deck.end());
        deque<int> dq;
        int n = deck.size();
        dq.push_front(deck[0]);
        for(int i=1; i<n; i++) {
            int temp = dq.back();
            dq.pop_back();
            dq.push_front(temp);
            dq.push_front(deck[i]);
        }

        vector<int> ans;
        while(!dq.empty()) {
            ans.push_back(dq.front());
            dq.pop_front();
        }

        return ans;
    }
};
