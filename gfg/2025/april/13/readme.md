#Given a connected undirected graph represented by adjacency list, adjList[][] with n nodes, having a distinct label from 0 to n-1, where each adj[i] represents the list of vertices connected to vertex i.

Create a clone of the graph, where each node in the graph contains an integer val and an array (neighbors) of nodes, containing nodes that are adjacent to the current node.

class Node {
    val: integer
    neighbors: List[Node]
}
Your task is to complete the function cloneGraph( ) which takes a starting node of the graph as input and returns the copy of the given node as a reference to the cloned graph.

**Note:** If you return a correct copy of the given graph, then the driver code will print true; and if an incorrect copy is generated or when you return the original node, the driver code will print false.

### Examples:
#### Input: 
n = 4, adjList[][] = [[1, 2], [0, 2], [0, 1, 3], [2]]
#### Output:
true
#### Explanation: 
![image](https://github.com/user-attachments/assets/57bc8f50-fcaa-41ec-8b7a-1cb5aa20f584)
As the cloned graph is identical to the original one the driver code will print true.

#### Input: 
n = 3, adjList[][] = [[1, 2], [0], [0]]
####  Output:
true
#### Explanation: 
![image](https://github.com/user-attachments/assets/d67e8353-9766-4d7e-80ea-dbd430baabbf)
As the cloned graph is identical to the original one the driver code will print true.

### Constraints:
1 ≤ n ≤ $`10^4`$
0 ≤ no. of edges ≤ $`10^5`$
0 ≤ adjList[i][j] < n Clone an Undirected Graph
