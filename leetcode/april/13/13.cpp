class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty() || matrix[0].empty()) return 0;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> heights(m+1, 0);
        int maxArea = 0;

        for(auto& row: matrix) {
            for(int i=0; i<m; i++) {
                if(row[i] == '1') heights[i]++;
                else heights[i] = 0;
            }

            stack<int> st;
            for(int i=0; i<heights.size(); i++) {
                while(!st.empty() && heights[i] < heights[st.top()]) {
                    int h = heights[st.top()];
                    st.pop();
                    int w = i;
                    if(!st.empty()) w -= st.top()+1;
                    maxArea = max(maxArea, h * w);
                }
                st.push(i);
            }
        }

        return maxArea;
    }
};
