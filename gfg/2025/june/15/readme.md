# Smallest Divisor
Given an integer array arr[] and an integer k (where k ≥ arr.length), find the smallest positive integer divisor such that the sum of the ceiling values of each element in arr[] divided by this divisor is less than or equal to k.

### Examples:
#### Input: 
arr[] = [1, 2, 5, 9], k = 6
#### Output: 
5
#### Explanation:
5 is the smallest divisor having sum of quotients (1 + 1 + 1 + 2 = 5) less than or equal to 6.

#### Input: 
arr[] = [1, 1, 1, 1], k = 4
#### Output:
1
#### Explanation:
1 is the smallest divisor having sum of quotients (1 + 1 + 1 + 1 = 4) less than or equal to 4.

### Constraints:
1  ≤  arr.size()  ≤ $`10^5`$
1  ≤  arr[i]  ≤ $`10^6`$
arr.size()  ≤ k  ≤ $`10^6`$

