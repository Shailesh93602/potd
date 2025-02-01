//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	vector<bool>used; 
	vector<int>eu,ev; 
	vector<int>ans; 

	// 
	void dfs(int u, vector<vector<int>>& adj) {
		while (adj[u].size()) { 
			int e = adj[u].back(); 
			adj[u].pop_back(); 

			if (used[e]) 
				continue;

			used[e] = true; 
			dfs(eu[e] ^ ev[e] ^ u, adj); 
			ans.push_back(u); 
		}
	}

	
	bool isEularCircuitExist(int v, vector<int>adj[]) {
		set<pair<int,int>>st; 
		for (int i = 0; i < v; i++) {
			for (int j = 0; j < adj[i].size(); j++) {
				int u = i;
				int k = adj[i][j];

				if (st.find({u, k}) == st.end() and st.find({k, u}) == st.end()) {
					eu.push_back(u); 
					ev.push_back(k); 
					st.insert({u, k}); 
				}
			}
		}

		vector<vector<int>>adj1(v); 
		used.assign(eu.size(), false); 

		for (int i = 0; i < eu.size(); i++) {
			adj1[eu[i]].push_back(i); 
			adj1[ev[i]].push_back(i); 
		}

		for (int i = 0; i < v; i++) {
			if (adj1[i].size() & 1) 
				return false; 
		}

		ans.push_back(0); 
		dfs(0, adj1); 

		if ((int)ans.size() ^ (int)eu.size() + 1) 
			return false; 

		return true;
	}
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isEularCircuitExist(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends
