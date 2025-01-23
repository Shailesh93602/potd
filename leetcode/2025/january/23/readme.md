# 1267. Count Servers that Communicate
You are given a map of a server center, represented as a m * n integer matrix grid, where 1 means that on that cell there is a server and 0 means that it is no server. Two servers are said to communicate if they are on the same row or on the same column.

Return the number of servers that communicate with any other server.

### Example 1:
![image](https://github.com/user-attachments/assets/02e1f8e4-ca4e-4614-8dd9-8d2ddd70f416)
#### Input:
grid = [[1,0],[0,1]]
#### Output:
0
#### Explanation:
No servers can communicate with others.

### Example 2:
![image](https://github.com/user-attachments/assets/f9956248-8b57-4acf-92b3-2f7e2ce2b9cd)
#### Input: 
grid = [[1,0],[1,1]]
#### Output:
3
#### Explanation: 
All three servers can communicate with at least one other server.

### Example 3:
![image](https://github.com/user-attachments/assets/2aac1143-7c16-43d1-a9fd-63a52aa17280)
#### Input: 
grid = [[1,1,0,0],[0,0,1,0],[0,0,1,0],[0,0,0,1]]
#### Output: 
4
#### Explanation: 
The two servers in the first row can communicate with each other. The two servers in the third column can communicate with each other. The server at right bottom corner can't communicate with any other server.
 
### Constraints:
m == grid.length
n == grid[i].length
1 <= m <= 250
1 <= n <= 250
grid[i][j] == 0 or 1


