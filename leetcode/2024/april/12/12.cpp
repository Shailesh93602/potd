class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int j = height.size()-1;
        int leftMax = height[0];
        int rightMax = height[j];
        int sum = 0;
        while(i < j) {
            if(leftMax <= rightMax) {
                sum += (leftMax - height[i++]);
                leftMax = max(leftMax, height[i]);
            }
            else {
                sum += (rightMax - height[j--]);
                rightMax = max(rightMax, height[j]);
            }
        }
        return sum;
    }
};
