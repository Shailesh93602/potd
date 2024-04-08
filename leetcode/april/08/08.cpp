class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        int i = 0;
        vector<int> eated(n, false);
        bool flag = true;
        int count = 0;
        while(flag && i < n) {
            flag = false;
            for(int j=0; j<n; j++) {
                if(!eated[j] && students[j] == sandwiches[i]) {
                    i++;
                    eated[j] = true;
                    flag = true;
                    count++;
                }
            }
        }
        return n-count;
    }
};
