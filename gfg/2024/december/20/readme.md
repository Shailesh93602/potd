# Spirally traversing a matrix
You are given a rectangular matrix mat[][] of size n x m, and your task is to return an array while traversing the matrix in spiral form.

### Examples:
#### Input:
mat[][] = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]
#### Output:
[1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10]
#### Explanation: 
![image](https://github.com/user-attachments/assets/f3bfa7ec-c293-49b5-9ce4-9e86c040b6f9)

#### Input:
mat[][] = [[1, 2, 3, 4, 5, 6], [7, 8, 9, 10, 11, 12], [13, 14, 15, 16, 17, 18]]
#### Output:
[1, 2, 3, 4, 5, 6, 12, 18, 17, 16, 15, 14, 13, 7, 8, 9, 10, 11]
#### Explanation:
Applying same technique as shown above.

#### Input:
mat[][] = [[32, 44, 27, 23], [54, 28, 50, 62]]
#### Output:
[32, 44, 27, 23, 62, 50, 28, 54]
#### Explanation:
Applying same technique as shown above, output will be [32, 44, 27, 23, 62, 50, 28, 54].

### Constraints:
1 <= n, m <= 1000
0 <= mat[i][j] <= 100

