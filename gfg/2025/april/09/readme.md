# Articulation Point - II
You are given an undirected graph with V vertices and E edges. The graph is represented as a 2D array edges[][], where each element edges[i] = [u, v] indicates an undirected edge between vertices u and v.
Your task is to return all the articulation points (or cut vertices) in the graph.
An articulation point is a vertex whose removal, along with all its connected edges, increases the number of connected components in the graph.

Note: The graph may be disconnected, i.e., it may consist of more than one connected component.
If no such point exists, return {-1}.

### Examples:
#### Input:
V = 5, edges[][] = [[0, 1], [1, 4], [4, 3], [4, 2], [2, 3]]
![image](https://github.com/user-attachments/assets/f8eeb7ab-9c11-4fe4-9858-c3497cedfa60)
#### Output:
[1, 4]
#### Explanation:
Removing the vertex 1 or 4 will disconnects the graph as-
 ![image](https://github.com/user-attachments/assets/575dcbb4-129d-46a0-a3b7-10bd4a640872)
 ![image](https://github.com/user-attachments/assets/724c36ff-b10d-4654-89be-cac14e93e783)

#### Input:
V = 4, edges[][] = [[0, 1], [0, 2]]
#### Output:
[0]
#### Explanation:
Removing the vertex 0 will increase the number of disconnected components to 3.  

### Constraints:
1 ≤ V, E ≤ $`10^4`$
