# 840. Magic Squares In Grid
A 3 x 3 magic square is a 3 x 3 grid filled with distinct numbers from 1 to 9 such that each row, column, and both diagonals all have the same sum.

Given a row x col grid of integers, how many 3 x 3 contiguous magic square subgrids are there?

**Note:** while a magic square can only contain numbers from 1 to 9, grid may contain numbers up to 15.

### Example 1:
![image](https://github.com/user-attachments/assets/42a1bd95-3b3b-4388-b186-07c650422b61)
#### Input:
grid = [[4,3,8,4],[9,5,1,9],[2,7,6,2]]
#### Output:
1
#### Explanation: 
The following subgrid is a 3 x 3 magic square:
![image](https://github.com/user-attachments/assets/6b21d489-c77a-4a4f-9e5d-9a2b966701af)
**while this one is not:**
![image](https://github.com/user-attachments/assets/a7254a9a-58ac-43b9-a411-4b557279d2c6)
In total, there is only one magic square inside the given grid.

### Example 2:
#### Input:
grid = [[8]]
#### Output: 
0
 
### Constraints:
row == grid.length
col == grid[i].length
1 <= row, col <= 10
0 <= grid[i][j] <= 15

