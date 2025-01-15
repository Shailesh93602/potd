class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int ans = 0, target = 0, count = 0, curr = 31;

        while(num2) {
            target += (num2 & 1);

            num2 >>= 1;
        }

        while(count < target) {
            if((num1 & (1 << curr)) || 
                (target - count) > curr) {
                    ans |= (1 << curr);
                    count++;
                }

                curr--;
        }

        return ans;
    }
};
