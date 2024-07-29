# Row with max 1s
Given a boolean 2D array, consisting of only 1's and 0's, where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's. Return the 0-based index of the first row that has the most number of 1s. If no such row exists, return -1.

### Examples :
#### Input:
arr[][] = [[0, 1, 1, 1],[0, 0, 1, 1],[1, 1, 1, 1],[0, 0, 0, 0]]
#### Output:
2
#### Explanation:
Row 2 contains 4 1's (0-based indexing).

#### Input: 
arr[][] = [[0, 0], [1, 1]]
#### Output:
1
#### Explanation: 
Row 1 contains 2 1's (0-based indexing).
 
###### Expected Time Complexity: O(n+m)
###### Expected Auxiliary Space: O(1)

### Constraints:
1 ≤ number of rows, number of columns ≤ $`10^3`$
0 ≤ arr[i][j] ≤ 1 

 
