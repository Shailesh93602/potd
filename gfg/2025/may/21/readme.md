# Kth Smallest Number in Multiplication Table
Given three integers m, n and k. Consider a grid of m * n, where mat[i][j] = i * j (1 based index). The task is to return the kth smallest element in the m * n multiplication table.

### Examples:
#### Input:
m = 3, n = 3, k = 5
#### Output:
3
#### Explanation: 
The 5th smallest element is 3. 
![image](https://github.com/user-attachments/assets/581e2970-99d1-4f30-a9fb-84aaa644ffa9)

#### Input: 
m = 2, n = 3, k = 6
#### Output:
6 
#### Explanation:
[1, 2, 3][2, 4, 6]. The 6th smallest element is 6.

### Constraints:
1 <= m, n <= $`3 * 10^4`$
1 <= k <= m * n

