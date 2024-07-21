# Maximum product subset of an array
Given an array arr. The task is to find and return the maximum product possible with the subset of elements present in the array.

Note:

The maximum product can be a single element also.
Since the product can be large, return it modulo 109 + 7.

### Examples:
#### Input: 
arr[] = [-1, 0, -2, 4, 3]
#### Output:
24
#### Explanation:
Maximum product will be ( -1 * -2 * 4 * 3 ) = 24

#### Input:
arr[] = [-1, 0]
#### Output:
0
#### Explanation:
Maximum product will be ( -1 * 0) = 0

#### Input: 
arr[] = [5]
#### Output:
5
#### Explanation: 
Maximum product will be 5.

###### Expected Time Complexity: O(n)
###### Expected Auxiliary Space: O(1)

### Constraints:
1 <= arr.size() <= $`2 * 10^4`$
-10 <= arr[i] <= 10

