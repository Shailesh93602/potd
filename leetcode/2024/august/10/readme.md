# 959. Regions Cut By Slashes
An n x n grid is composed of 1 x 1 squares where each 1 x 1 square consists of a '/', '\', or blank space ' '. These characters divide the square into contiguous regions.

Given the grid grid represented as a string array, return the number of regions.

Note that backslash characters are escaped, so a '\' is represented as '\\'.

### Example 1:
![image](https://github.com/user-attachments/assets/2720f12b-19c9-4595-be2e-c8047142d743)
#### Input:
grid = [" /","/ "]
#### Output:
2

### Example 2:
![image](https://github.com/user-attachments/assets/b2ed1bf2-6424-4e3b-9cec-5a18d75568c0)
#### Input:
grid = [" /","  "]
#### Output:
1

### Example 3:
![image](https://github.com/user-attachments/assets/3a0aa086-927c-4d7a-a112-34666369e2b8)
#### Input:
grid = ["/\\","\\/"]
#### Output:
5
#### Explanation:
Recall that because \ characters are escaped, "\\/" refers to \/, and "/\\" refers to /\.
 
### Constraints:
n == grid.length == grid[i].length
1 <= n <= 30
grid[i][j] is either '/', '\', or ' '.


