class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char, int> freq;
        
        for(char ch: s) freq[ch]++;

        priority_queue<char> pq;

        for(auto &[ch, count]: freq) pq.push(ch);

        string ans;

        while(!pq.empty()) {
            char ch = pq.top();
            pq.pop();

            int count = freq[ch];
            int minVal = min(count, repeatLimit);
            ans.append(minVal, ch);

            freq[ch] -= minVal;

            if(freq[ch] > 0 && !pq.empty()) {
                char top = pq.top();
                pq.pop();
             
                ans.push_back(top);
                freq[top]--;

                if(freq[top] > 0) pq.push(top);

                pq.push(ch);
            }
        }

        return ans;
    }
};
