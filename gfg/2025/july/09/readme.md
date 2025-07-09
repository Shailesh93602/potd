# Sum of subarray minimum
Given an array arr[] of positive integers, find the total sum of the minimum elements of every possible subarrays.

**Note:** It is guaranteed that the total sum will fit within a 32-bit unsigned integer.

### Examples:
#### Input:
arr[] = [3, 1, 2, 4]
#### Output: 
17
#### Explanation:
Subarrays are [3], [1], [2], [4], [3, 1], [1, 2], [2, 4], [3, 1, 2], [1, 2, 4], [3, 1, 2, 4]. Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1. Sum of all these is 17.

#### Input:
arr[] = [71, 55, 82, 55]
#### Output:
593
#### Explanation:
The sum of the minimum of all the subarrays is 593.

### Constraints:
1 ≤ arr.size() ≤ $`3*10^4`$
1 ≤ arr[i] ≤ $`10^3`$



