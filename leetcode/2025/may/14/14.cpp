static constexpr int n = 26;
int MOD = 1e9 + 7;

struct Freq {
    int a[n][n];

    Freq() { memset(a, 0, sizeof(a)); }
    Freq(const Freq &ans) {
        for(int i=0; i<n; i++) 
            for(int j=0; j<n; j++)
                a[i][j] = ans.a[i][j];
    }
    Freq& operator = (const Freq &ans) {
        if(this != &ans) {
            for(int i=0; i<n; i++)
                for(int j=0; j<n; j++)
                    a[i][j] = ans.a[i][j];
        }

        return *this;
    }
};

Freq operator*(Freq &u, Freq &v) {
    Freq ans;

    for(int i=0; i<n; i++) 
        for(int j=0; j<n; j++) 
            for(int k=0; k<n; k++) 
                ans.a[i][j] = (ans.a[i][j] + (long long)u.a[i][k] * v.a[k][j]) % MOD;

    return ans;
}

Freq I() {
    Freq ans;

    for(int i=0; i<n; i++) ans.a[i][i] = 1;

    return ans;
}

Freq quickMul(Freq &x, int y) {
    Freq ans = I(), curr = x;

    while(y) {
        if(y & 1) ans = ans * curr;

        curr = curr * curr;
        y >>= 1;
    }

    return ans;
}

class Solution {
public:
    int lengthAfterTransformations(string s, int t, vector<int>& nums) {
        Freq f;

        for(int i=0; i<n; i++) 
            for(int j=1; j<=nums[i]; j++)
                f.a[(i + j) % n][i] = 1;

        Freq res = quickMul(f, t);
        int ans = 0;
        vector<int> freq(n);

        for(char ch: s) freq[ch - 'a']++;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                ans = (ans + (long long)res.a[i][j] * freq[j]) % MOD;

        return ans;
    }
};
