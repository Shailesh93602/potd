# Number of pairs
Given two positive integer arrays arr and brr, find the number of pairs such that xy > yx (raised to power of) where x is an element from arr and y is an element from brr.

### Examples :
#### Input:
arr[] = [2, 1, 6], brr[] = [1, 5]
#### Output: 
3
#### Explanation: 
The pairs which follow xy > yx are: 21 > 12,  25 > 52 and 61 > 16 .

#### Input:
arr[] = [2 3 4 5], brr[] = [1 2 3]
#### Output: 
5
#### Explanation: 
The pairs which follow xy > yx are: 21 > 12 , 31 > 13 , 32 > 23 , 41 > 14 , 51 > 15 .

###### Expected Time Complexity: O((N + M)log(N)).
###### Expected Auxiliary Space: O(1).

### Constraints:
1 ≤ arr.size(), brr.size() ≤ $`10^5`$
1 ≤ brr[i], arr[i] ≤ $`10^3`$


