# 1931. Painting a Grid With Three Different Colors
You are given two integers m and n. Consider an m x n grid where each cell is initially white. You can paint each cell red, green, or blue. All cells must be painted.

Return the number of ways to color the grid with no two adjacent cells having the same color. Since the answer can be very large, return it modulo $`10^9 + 7`$.

### Example 1:
![image](https://github.com/user-attachments/assets/7db6e4ba-19be-4948-9326-6513280d2108)
#### Input: 
m = 1, n = 1
#### Output:
3
#### Explanation: 
The three possible colorings are shown in the image above.

### Example 2:
![image](https://github.com/user-attachments/assets/41928a21-6b70-46a9-99b5-cf26ea929fff)
#### Input:
m = 1, n = 2
#### Output: 
6
#### Explanation:
The six possible colorings are shown in the image above.

### Example 3:
#### Input:
m = 5, n = 5
#### Output:
580986
 
### Constraints:
1 <= m <= 5
1 <= n <= 1000

