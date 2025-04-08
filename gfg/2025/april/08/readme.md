# Bridge edge in a graph
Given an undirected graph with V vertices numbered from 0 to V-1 and E edges, represented by 2d array edges[][], where edges[i]=[u,v] represents the edge between the vertices u and v. Determine whether a specific edge between two vertices (c, d) is a bridge.

**Note:**
An edge is called a bridge if removing it increases the number of connected components of the graph.
if there’s only one path between c and d (which is the edge itself), then that edge is a bridge.

### Examples:
#### Input:
![image](https://github.com/user-attachments/assets/a687f661-de32-463c-bc3b-c15c6ebf2c69)
c = 1, d = 2
#### Output:
true
#### Explanation:
From the graph, we can clearly see that blocking the edge 1-2 will result in disconnection of the graph.
Hence, it is a Bridge.

#### Input:
![image](https://github.com/user-attachments/assets/fec57112-5dc1-4b0d-97d4-e289126720ea)
c = 0, d = 2
#### Output:
false
#### Explanation:
![image](https://github.com/user-attachments/assets/23292159-dde5-4df7-bde6-fc306fa62aec)
Blocking the edge between nodes 0 and 2 won't affect the connectivity of the graph.
So, it's not a Bridge Edge. All the Bridge Edges in the graph are marked with a blue line in the above image.

### Constraints:
1 ≤ V, E ≤ $`10^5`$
0 ≤ c, d ≤ V-1
