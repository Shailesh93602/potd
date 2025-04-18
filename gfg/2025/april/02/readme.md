# BFS of graph
Given a connected undirected graph represented by a 2-d adjacency list adj[][], where each adj[i] represents the list of vertices connected to vertex i. Perform a Breadth First Search (BFS) traversal starting from vertex 0, visiting vertices from left to right according to the given adjacency list, and return a list containing the BFS traversal of the graph.

**Note:** Do traverse in the same order as they are in the given adjacency list.

### Examples:
#### Input: 
adj[][] = [[2, 3, 1], [0], [0, 4], [0], [2]]
![image](https://github.com/user-attachments/assets/ffd2a99f-4d74-4f28-b0b9-10f5e07e712d)
#### Output:
[0, 2, 3, 1, 4]
#### Explanation:
Starting from 0, the BFS traversal will follow these steps: 
Visit 0 → Output: 0 
Visit 2 (first neighbor of 0) → Output: 0, 2 
Visit 3 (next neighbor of 0) → Output: 0, 2, 3 
Visit 1 (next neighbor of 0) → Output: 0, 2, 3, 
Visit 4 (neighbor of 2) → Final Output: 0, 2, 3, 1, 4

#### Input:
adj[][] = [[1, 2], [0, 2], [0, 1, 3, 4], [2], [2]]
![image](https://github.com/user-attachments/assets/ebc9558a-6df4-4f49-bc3d-18a4a44c0a31)
#### Output: 
[0, 1, 2, 3, 4]
#### Explanation: 
Starting from 0, the BFS traversal proceeds as follows: 
Visit 0 → Output: 0 
Visit 1 (the first neighbor of 0) → Output: 0, 1 
Visit 2 (the next neighbor of 0) → Output: 0, 1, 2 
Visit 3 (the first neighbor of 2 that hasn't been visited yet) → Output: 0, 1, 2, 3 
Visit 4 (the next neighbor of 2) → Final Output: 0, 1, 2, 3, 4

### Constraints:
1 ≤ adj.size() ≤ $`10^4`$
1 ≤ adj[i][j] ≤ $`10^4`$


