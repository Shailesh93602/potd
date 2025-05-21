# 73. Set Matrix Zeroes
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

### Example 1:
![image](https://github.com/user-attachments/assets/3047eb57-bf2f-4e37-991b-3be5d81992dd)
#### Input:
matrix = [[1,1,1],[1,0,1],[1,1,1]]
#### Output:
[[1,0,1],[0,0,0],[1,0,1]]

### Example 2:
![image](https://github.com/user-attachments/assets/f015da99-a413-4616-b75c-77ffbf7edf3b)
#### Input:
matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
#### Output: 
[[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 
### Constraints:
m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
$`-2^31`$ <= matrix[i][j] <= $`2^31 - 1`$

**Follow up:**
A straightforward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but still not the best solution.
Could you devise a constant space solution?

