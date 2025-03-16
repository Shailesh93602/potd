class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long i = 1, j = 1LL * cars * cars * ranks[0];

        while(i < j) {
            long long mid = i + ( j - i ) / 2, req = 0;

            for(auto r: ranks) req += sqrt(1.0 * mid / r);
            
            if(req < cars) i = mid + 1;
            else j = mid;
        }

        return i;
    }
};
