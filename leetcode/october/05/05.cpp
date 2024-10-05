class Solution {
public:

    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();

        if(n2 < n1) return 0;
        array<int, 26> freq = {0};
        bitset<26> need = 0;

        for(char c: s1) {
            int idx = c-'a';
            freq[idx]++;
            need[idx] = 1;
        }

        for(int l=0, r=0; r<n2; r++) {
            int i = s2[r] - 'a';
            freq[i]--;
            if(freq[i] == 0) need[i] = 0;

            while(freq[i] < 0) {
                int j = s2[l] - 'a';
                freq[j]++;
                if(freq[j] > 0) need[j] = 1;
                l++;
            }

            if(need == 0) return 1;
        }

        return 0;
    }
};
