# Minimum Weight Cycle
Given an undirected, weighted graph with V vertices numbered from 0 to V-1 and E edges, represented by a 2d array edges[][], where edges[i] = [u, v, w] represents the edge between the nodes u and v having w edge weight.
Your task is to find the minimum weight cycle in this graph.

### Examples:
#### Input:
V = 5, edges[][] = [[0, 1, 2], [1, 2, 2], [1, 3, 1], [1, 4, 1], [0, 4, 3], [2, 3, 4]]
![image](https://github.com/user-attachments/assets/4e16e80a-d015-43d8-bc6e-c31606def78e)
#### Output:
6
#### Explanation: 
![image](https://github.com/user-attachments/assets/84af10ed-4a76-456d-93d7-f32bfee5a5fb)
Minimum-weighted cycle is  0 → 1 → 4 → 0 with a total weight of 6(2 + 1 + 3)

#### Input:
V = 5, edges[][] = [[0, 1, 3], [1, 2, 2], [0, 4, 1], [1, 4, 2], [1, 3, 1], [3, 4, 2], [2, 3, 3]]
![image](https://github.com/user-attachments/assets/de055c77-713c-4dea-98e8-05b2c6a9e03a)
#### Output: 
5
#### Explanation: 
![image](https://github.com/user-attachments/assets/7f5cdd96-c61b-413c-a412-962d7f53e193)
Minimum-weighted cycle is  1 → 3 → 4 → 1 with a total weight of 5(1 + 2 + 2)

### Constraints:
1 ≤ V ≤ 100
1 ≤ E = edges.size() ≤ $`10^3`$ 
1 ≤ edges[i][j] ≤ 100

