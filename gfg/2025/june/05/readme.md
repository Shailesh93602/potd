# Count the paths
Given a Directed Acyclic Graph (DAG) with V nodes labeled from 0 to V-1, and a list of directed edges, count the total number of distinct paths from a given start node to a destination node. Each edge is represented as edges[i] = [u, v], indicating a directed edge from u to v.

### Examples:
#### Input: 
edges[][] = [[0,1], [0,3], [2,0], [2,1], [1,3]], V = 4, src = 2, dest = 3
#### Output:
3
#### Explanation:
There are three ways to reach at 3 from 2. These are: 2 -> 1 -> 3, 2 -> 0 -> 3 and 2 -> 0 -> 1 -> 3.
Print-all-paths-1
![image](https://github.com/user-attachments/assets/39c593e2-8e23-42e1-8ca4-1b7168ef335d)

#### Input: 
edges[][] = [[0,1], [1,2], [1,3], [2,3]], V = 4, src = 0, dest = 3
#### Output: 
2
#### Explanation: 
There is two way to reach at 3 from 0 that is : 0 -> 1 -> 2 -> 3 and 0 -> 1 -> 3.
Print-all-paths-2
![image](https://github.com/user-attachments/assets/565a6514-1633-4043-afdb-8ae073d2fd14)

### Constraints:
2  ≤  V  ≤  $`10^3`$
1  ≤   E = edges.size()  ≤  (V * (V - 1)) / 2

