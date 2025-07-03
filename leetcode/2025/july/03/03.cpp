class Solution {
public:
    char kthCharacter(int k) {
        int ans = 0, i;

        while(k != 1) {
            i = __lg(k);

            if((1 << i) == k) i--;

            k -= (1 << i);
            ans++;
        }

        return 'a' + ans;
    }
};
