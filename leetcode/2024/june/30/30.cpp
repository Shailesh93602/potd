class Solution {
public:
    int find(int a, vector<int> &root) {
        if(root[a] != a) root[a] = find(root[a], root);

        return root[a];
    }
    bool uni(int a, int b, vector<int> &root) {
        int root1 = find(a, root);
        int root2 = find(b, root);
        if(root1 == root2) return false;

        root[root1] = root2;
        return true;
    }
    int maxNumEdgesToRemove(int n, vector<vector<int>> &edges) {
        vector<int> root1(n+1);
        vector<int> root2(n+1);
        for(int i=1; i<=n; i++) {
            root1[i] = i;
            root2[i] = i;
        }
        int ans = 0;
        int alice = 0;
        int bob = 0;

        for(auto &edge: edges) {
            if(edge[0] == 3) {
                if(uni(edge[1], edge[2], root1)) {
                    alice++;
                    if(uni(edge[1], edge[2], root2)) bob++;
                }
                else ans++;
            }
        }

        vector<int> temp = root1;

        for(auto &edge: edges) {
            if(edge[0] == 1) {
                if(uni(edge[1], edge[2], root1)) alice++;
                else ans++;
            }
        }
        
        root1 = temp;
        for(auto &edge: edges) {
            if(edge[0] == 2) {
                if(uni(edge[1], edge[2], root2)) bob++;
                else ans++;
            }
        }
        
        if(alice == bob && alice == n-1) return ans;
        return -1;
    }   

};
