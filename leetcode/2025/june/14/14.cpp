class Solution {
public:
    int minMaxDifference(int num) {
        string s1 = to_string(num);
        string s2 = s1;

        int i=0, n = s1.length();

        while(i < n) {
            if(s1[i] != '9') break;

            i++;
        }

        if(i < n) {
            char ch = s1[i];

            for(int j=0; j<n; j++) 
                if(s1[j] == ch) 
                    s1[j] = '9';
            
        }
        
        char ch = s2[0];
        for(int j=0; j<n; j++) 
            if(s2[j] == ch)
                s2[j] = '0';

        return stoi(s1) - stoi(s2);
    }
};
