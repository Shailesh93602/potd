class Solution {
  public:
    bool sameFreq(string& s) {
        // code here
        vector<int> map(26, 0);
        
        for(char ch: s) map[ch - 'a']++;
        
        int maxVal = INT_MIN, minVal = INT_MAX, maxCount = 0, minCount = 0;
        
        for(int i: map) {
            if(i == 0) continue;
            
            if(i == maxVal) maxCount++;
            else if(i > maxVal) {
                maxVal = i;
                maxCount = 1;
            }
            if(i == minVal) minCount++;
            else if(i < minVal) {
                minVal = i;
                minCount = 1;
            }
            
        }

        if((maxVal - minVal) == 0) 
            return true;
        if((maxVal - minVal) == 1 && (maxCount == 1 || 
            (minCount == 1 && minVal == 1))) 
                return true;
        
        return false;
    }
};
