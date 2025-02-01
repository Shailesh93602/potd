# Largest square formed in a matrix
Given a binary matrix mat of size n * m, find out the maximum length of a side of a square sub-matrix with all 1s.

### Examples:
#### Input:
n = 6, m = 5
mat = [[0, 1, 1, 0, 1], 
       [1, 1, 0, 1, 0],
       [0, 1, 1, 1, 0],
       [1, 1, 1, 1, 0],
       [1, 1, 1, 1, 1],
       [0, 0, 0, 0, 0]]
#### Output:
3
#### Explanation: 
![image](https://github.com/Shailesh93602/potd/assets/87556206/b4a404ac-5c0d-43a2-b3f1-87359b50db19)
The maximum length of a side of the square sub-matrix is 3 where every element is 1.

#### Input:
n = 2, m = 2
mat = [[1, 1], 
       [1, 1]]
#### Output:
2
#### Explanation:
The maximum length of a side of the square sub-matrix is 2. The matrix itself is the maximum sized sub-matrix in this case.

#### Input:
n = 2, m = 2
mat = [[0, 0], 
       [0, 0]]
#### Output:
0
#### xplanation:
There is no 1 in the matrix.

###### Expected Time Complexity: O(n*m)
###### Expected Auxiliary Space: O(n*m)

### Constraints:
1 ≤ n, m ≤ 500
0 ≤ mat[i][j] ≤ 1 


