class Solution {
public:
    int minLength(string s) {
        int i = 0;
        vector<char> arr(s.begin(), s.end());

        for(int j=0; j<s.length(); j++) {
            arr[i] = arr[j];

            if(i > 0 && (arr[i-1] == 'A' || arr[i-1] == 'C') 
                && arr[i] == arr[i-1]+1) i--;
            else i++;
        }

        return i;
    }
};
