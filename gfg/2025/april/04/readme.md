# Undirected Graph Cycle
Given an undirected graph with V vertices and E edges, represented as a 2D vector edges[][], where each entry edges[i] = [u, v] denotes an edge between vertices u and v, determine whether the graph contains a cycle or not.

### Examples:
#### Input:
V = 4, E = 4, edges[][] = [[0, 1], [0, 2], [1, 2], [2, 3]]
#### Output: 
true
#### Explanation:  
![image](https://github.com/user-attachments/assets/8681ee80-ed47-45b3-ba9d-9b30662d3f1f)
1 -> 2 -> 0 -> 1 is a cycle.

#### Input:
V = 4, E = 3, edges[][] = [[0, 1], [1, 2], [2, 3]]
#### Output: 
false
#### Explanation: 
![image](https://github.com/user-attachments/assets/d1a6fb9b-1190-4b54-8ea2-e0110e0efe0b)
No cycle in the graph.

### Constraints:
1 ≤ V ≤ $`10^5`$
1 ≤ E = edges.size() ≤ $`10^5`$

