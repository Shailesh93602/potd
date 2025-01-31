# Solve the Sudoku
Given an incomplete Sudoku configuration in terms of a 9x9  2-D interger square matrix, mat[][], the task is to solve the Sudoku. It is guaranteed that the input Sudoku will have exactly one solution.

**A sudoku solution must satisfy all of the following rules:**
Each of the digits 1-9 must occur exactly once in each row.
Each of the digits 1-9 must occur exactly once in each column.
Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
**Note:** Zeros represent blanks to be filled with numbers 1-9, while non-zero cells are fixed and cannot be changed.

### Examples:
#### Input: 
mat[][] = 
![image](https://github.com/user-attachments/assets/fd083eee-0c60-44dc-95b9-2927691f6da0)
#### Output:
![image](https://github.com/user-attachments/assets/32654700-4009-40c8-ad81-4f0dccf4b5b8)
#### Explanation: 
Each row, column and 3 x 3 box of the output matrix contains unique numbers.

#### Input:
mat[][] = 
![image](https://github.com/user-attachments/assets/9f30f693-4c29-4e25-8851-ff11558f1a4a)
#### Output:
![image](https://github.com/user-attachments/assets/bc2a2797-529b-4fc4-9bdc-6b4a91cd127f)
#### Explanation:
Each row, column and 3 x 3 box of the output matrix contains unique numbers.

### Constraints:
mat.size() = 9
mat[i].size() = 9
0 ≤ mat[i][j] ≤ 9
