# Smallest range in K lists
Given a 2d integer array arr[][] of size k*n, where each row is sorted in ascending order. Your task is to find the smallest range [l, r] that includes at least one element from each of the k lists. If more than one such ranges are found, return the first one.

### Examples:
#### Input:
n = 5, k = 3, arr[][] = [[4, 7, 9, 12, 15], [0, 8, 10, 14, 20], [6, 12, 16, 30, 50]]
#### Output: 
[6, 8]
#### Explanation:
Smallest range is formed by  number 7 from the first list, 8 from second list and 6 from the third list.

#### Input:
n = 5, k = 3, arr[][] = [[1, 3, 5, 7, 9], [0, 2, 4, 6, 8], [2, 3, 5, 7, 11]]
#### Output:
[1, 2]
#### Explanation:
Smallest range is formed by number 1 present in first list and 2 is present in both 2nd and 3rd list.

#### Input:
n = 2, k = 3, arr[][] = [[2, 4], [1, 7], [20, 40]]
#### Output:
[4, 20]
#### Explanation: 
Smallest range is formed by number 4 from the first list, 7 from second list and 20 from the third list.

### Constraints:
1 <= k, n <= 500
0 <= arr[ i ] <= $`10^5`$

