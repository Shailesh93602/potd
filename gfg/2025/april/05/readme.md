# Find the number of islands
Given a grid of size n*m (n is the number of rows and m is the number of columns in the grid) consisting of 'W's (Water) and 'L's (Land). Find the number of islands.

**Note:** An island is either surrounded by water or the boundary of a grid and is formed by connecting adjacent lands horizontally or vertically or diagonally i.e., in all 8 directions.

### Examples:
#### Input:
grid[][] = [['L', 'L', 'W', 'W', 'W'], ['W', 'L', 'W', 'W', 'L'], ['L', 'W', 'W', 'L', 'L'], ['W', 'W', 'W', 'W', 'W'], ['L', 'W', 'L', 'L', 'W']]
#### Output:
4
#### Explanation:
The image below shows all the 4 islands in the grid.
![image](https://github.com/user-attachments/assets/22587296-2353-46a7-b13b-e4c38a181cc4)
 
#### Input:
grid[][] = [['W', 'L', 'L', 'L', 'W', 'W', 'W'], ['W', 'W', 'L', 'L', 'W', 'L', 'W']]
#### Output: 
2
#### Expanation:
The image below shows 2 islands in the grid.
 ![image](https://github.com/user-attachments/assets/66b04380-d0cb-4aec-affb-2163435ae586)

### Constraints:
1 ≤ n, m ≤ 500
grid[i][j] = {'L', 'W'}


