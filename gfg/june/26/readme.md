# Coverage of all Zeros in a Binary Matrix
Given a binary matrix having n rows and m columns, your task is to find the sum of coverage of all zeros in the matrix where coverage for a particular 0 is defined as a total number of ones around a zero in left, right, up, and bottom directions.
 
### Examples:
#### Input: 
matrix = [[0, 1, 0],
          [0, 1, 1], 
          [0, 0, 0]]
#### Output:
6

#### Input: 
matrix = [[0, 1]]
#### Output: 
1

###### Expected Time Complexity: O(n * m)
###### Expected Space Complexity: O(1)
 
### Constraints:
1 <= mat.size, mat[0].size <= 100

