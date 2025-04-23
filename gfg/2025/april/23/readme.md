# Unique Number II
Given an array arr[] containing 2*n + 2 positive numbers, out of which 2*n numbers exist in pairs whereas the other two number occur exactly once and are distinct. Find the other two numbers. Return the answer in increasing order.

### Examples:
#### Input:
arr[] = [1, 2, 3, 2, 1, 4]
#### Output:
[3, 4] 
#### Explanation: 
3 and 4 occur exactly once.

#### Input: 
arr[] = [2, 1, 3, 2]
#### Output:
[1, 3]
#### Explanation:
1 and 3 occur exactly once.

#### Input: 
arr[] = [2, 1, 3, 3]
#### Output:
[1, 2]
#### Explanation:
1 and 2 occur exactly once.

### Constraints:
2 ≤ arr.size() ≤ $`10^6`$ 
1 ≤ arr[i] ≤ 5 * $`10^6`$
arr.size() is even

