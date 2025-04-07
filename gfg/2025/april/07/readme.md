# Directed Graph Cycle
Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, check whether it contains any cycle or not.
The graph is represented as a 2D vector edges[][], where each entry edges[i] = [u, v] denotes an edge from verticex u to v.

### Examples:
#### Input:
V = 4, edges[][] = [[0, 1], [1, 2], [2, 3], [3, 3]]
![image](https://github.com/user-attachments/assets/f741d931-eb26-4c62-9473-8977742e976d)
#### Output:
true
#### Explanation: 
3 -> 3 is a cycle

#### Input:
V = 3, edges[][] = [[0, 1], [1, 2]]
![image](https://github.com/user-attachments/assets/8429f78b-7ffc-4f8b-8064-6bd4dfb8bf39)
#### Output:
false
#### Explanation: 
no cycle in the graph

### Constraints:
1 ≤ V, E ≤ $`10^5`$

