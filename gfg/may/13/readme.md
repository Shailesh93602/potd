# Number of Good Components
Given an undirected graph with v vertices(numbered from 1 to v) and e edges. Find the number of good components in the graph.
A component of the graph is good if and only if the component is fully connected.
Note: A fully connected component is a subgraph of a given graph such that there's an edge between every pair of vertices in the component, the given graph can be a disconnected graph. 

### Example 1:
#### Input: 
![image](https://github.com/Shailesh93602/potd/assets/87556206/dfd0611d-72aa-4ebe-afad-4c1e8e9c62e5)
e=3 
v=3
edges={{1, 2},{1, 3},{3, 2}}
#### Output: 
1
#### Explanation: 
We can see that there is only one component in the graph and in this component there is a edge between any two vertces.

### Example 2:
#### Input:
![image](https://github.com/Shailesh93602/potd/assets/87556206/bd579203-1ade-4a28-aa1f-ad2cb3484fd9)
e=5 
v=7
edges={{1, 2},{7, 2},{3, 5},{3, 4},{4, 5}}
#### Output: 
2
#### Explanation: 
We can see that there are 3 components in the graph. For 1-2-7 there is no edge between 1 to 7, so it is not a fully connected component. Rest 2 are individually fully connected component.

### Your Task:
You don't need to read input or print anything. Your task is to complete the function findNumberOfGoodComponent(), which takes an integer e and v and edges[][] as input parameters and returns an integer denoting the number of good components.

###### Expected Time Complexity: O(v+e)
###### Expected Auxiliary Space: O(depth of the graph)

### Constraints:
1 ≤ v, e ≤ $`10^4`$

