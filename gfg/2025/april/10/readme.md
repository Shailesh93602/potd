# Minimum cost to connect all houses in a city
Given a 2D array houses[][], consisting of n 2D coordinates {x, y} where each coordinate represents the location of each house, the task is to find the minimum cost to connect all the houses of the city.

The cost of connecting two houses is the Manhattan Distance between the two points (xi, yi) and (xj, yj) i.e., |xi – xj| + |yi – yj|, where |p| denotes the absolute value of p.

### Examples:
#### Input:
n = 5 houses[][] = [[0, 7], [0, 9], [20, 7], [30, 7], [40, 70]]
#### Output:
105
#### Explanation:
Connect house 1 (0, 7) and house 2 (0, 9) with cost = 2
Connect house 1 (0, 7) and house 3 (20, 7) with cost = 20
Connect house 3 (20, 7) with house 4 (30, 7) with cost = 10 
At last, connect house 4 (30, 7) with house 5 (40, 70) with cost 73.
All the houses are connected now.
The overall minimum cost is 2 + 10 + 20 + 73 = 105.
![image](https://github.com/user-attachments/assets/110b0fa7-a811-4da6-b83c-d1cc68f05c2a)

#### Input:
n = 4 houses[][] = [[0, 0], [1, 1], [1, 3], [3, 0]]
#### Output: 
7
#### Explanation: 
Connect house 1 (0, 0) with house 2 (1, 1) with cost = 2
Connect house 2 (1, 1) with house 3 (1, 3) with cost = 2 
Connect house 1 (0, 0) with house 4 (3, 0) with cost = 3 
The overall minimum cost is 3 + 2 + 2 = 7.

### Constraint:
1 ≤ n ≤ $`10^3`$
0 ≤ houses[i][j] ≤ $`10^3`$



