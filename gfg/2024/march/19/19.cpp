//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

//Back-end complete function template for C++

class Solution{
	
	int ans;

	private:
	    int root(int i, vector<int> &parent) {
	        while(parent[i]!=i) {
	            parent[i] = parent[parent[i]];
	            i = parent[i];
	        }
	        return i;
	    }
	    int Union(int a, int b, vector<int> &parent, vector<int> &size) {
	        int ra = root(a, parent);
	        int rb = root(b, parent);
	        
	        if(ra == rb) return size[ra]*size[ra];
	        
	        if(size[ra] < size[rb]) {
	            swap(ra, rb);
	            swap(a, b);
	        }
	        ans += size[ra]*size[rb];
	        parent[rb] = ra;
	        size[ra] += size[rb];
	        
	        return ans;
	    }

	public:
	    vector<int> maximumWeight(int n, vector<vector<int>> edges, int q, vector<int> &queries) {
	        ans = 0;
	        
	        vector<int> parent(n+1, 0);
	        vector<int> size(n+1, 0);
	        for(int i=0; i<=n; i++) {
	            parent[i] = i;
	            size[i] = 1;
	        }
	        
	        vector<pair<int, pair<int, int>>> wt;
	        for(int i=0; i<n-1; i++) wt.push_back({edges[i][2], {edges[i][0], edges[i][1]}});
	        
	        sort(wt.begin(), wt.end());
	        
	        map<int, int> mp;
	        
	        for(int i=0; i<n-1; i++) {
	            int a = wt[i].first;
	            int b = wt[i].second.first;
	            int c = wt[i].second.second;
	            
	            mp[a] = Union(b, c, parent, size);
	        }
	        
	        vector<int> res;
	        
	        for(int i=0; i<q; i++) {
	            auto val = mp.upper_bound(queries[i]);
	            if(val == mp.begin()) res.push_back(0);
	            else {
	                val--;
	                res.push_back(val->second);
	            }
	        }
	        return res;
	    }
};



//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin >> n;
        
        vector<vector<int>> edges(n-1, vector<int> (3, 0));

        for(int i = 0; i < n-1; i++)
        {
        	for(int j = 0; j < 3; j++)
        	{
        		cin >> edges[i][j];
        	}
        }

        int q;
        cin >> q;
        vector<int> queries(q);
        for(int i = 0; i < q; i++)
        	cin >> queries[i];

    	Solution obj;
    	vector<int> ans = obj.maximumWeight(n, edges, q, queries);

    	for(auto i:ans)
    		cout << i << " ";
    	cout << "\n"; 
    }
    return 0;
}

// } Driver Code Ends
