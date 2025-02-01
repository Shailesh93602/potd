# Find the number of islands
Given a grid of size n*m (n is the number of rows and m is the number of columns in the grid) consisting of '0's (Water) and '1's(Land). Find the number of islands.

**Note:** An island is either surrounded by water or the boundary of a grid and is formed by connecting adjacent lands horizontally or vertically or diagonally i.e., in all 8 directions.

### Examples:
#### Input:
grid = [[0,1],[1,0],[1,1],[1,0]]
#### Output:
1
#### Explanation:
The grid is-
0 1
1 0
1 1
1 0
All lands are connected.

#### Input:
grid = [[0,1,1,1,0,0,0],[0,0,1,1,0,1,0]]
#### Output:
2
#### Expanation:
The grid is-
0 1 1 1 0 0 0
0 0 1 1 0 2 0 
There are two islands in the grid. One island is marked by '1' and the other by '2'.

###### Expected Time Complexity: O(n*m)
###### Expected Space Complexity: O(n*m)

### Constraints:
1 ≤ n, m ≤ 500
grid[i][j] = {'0', '1'}

