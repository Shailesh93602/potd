class Solution {
    int n, m, strength;
    bool doable(vector<int>& tasks, vector<int>& workers, int k, int pills){
        deque<int> q;
        int j = 0;
        for (int i=m-k; i<m; i++){
            int W=workers[i];
            for(; j<k && tasks[j]<=W+strength; j++)
                q.push_back(tasks[j]);
            
            if (q.empty()) return 0;
            if (q.front()<=W) q.pop_front();
            else{
                if (pills==0) return 0;
                pills--;
                q.pop_back(); 
            }
        }
        return 1;

    }
public:
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        n = tasks.size(), m = workers.size();
        this->strength=strength;
        sort(tasks.begin(), tasks.end());
        sort(workers.begin(), workers.end());

        int i=0, j = min(n, m);

        while (i < j) {
            int mid=(i + j + 1)/2;
            if (doable(tasks, workers, mid, pills))
                i = mid;
            else
                j = mid-1;
        }
        
        return i;
    }
};
