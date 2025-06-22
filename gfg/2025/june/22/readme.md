# Largest Divisible Subset
Given an array arr[] of distinct positive integers. Your task is to find the largest subset such that for every pair of elements (x, y) in the subset, either x divides y or y divides x.
**Note:** If multiple subsets of the same maximum length exist, return the one that is lexicographically greatest, after sorting the subset in ascending order.

### Examples:
#### Input: 
arr[] = [1, 16, 7, 8, 4]
#### Output:
[1, 4, 8, 16]
#### Explanation:
The largest divisible subset is [1, 4, 8, 16], where each element divides the next one. This subset is already the lexicographically greatest one.

#### Input: 
arr[] = [2, 4, 3, 8]
#### Output:
[2, 4, 8]
#### Explanation:
The largest divisible subset is [2, 4, 8], where each element divides the next one. This subset is already the lexicographically greatest one.

### Constraint:
1 ≤ arr.size() ≤ $`10^3`$
1  ≤ arr[i] ≤ $`10^9`$

