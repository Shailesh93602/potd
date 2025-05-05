# Search in an almost Sorted Array
Given a sorted integer array arr[] consisting of distinct elements, where some elements of the array are moved to either of the adjacent positions, i.e. arr[i] may be present at arr[i-1] or arr[i+1].
Given an integer target.  You have to return the index ( 0-based ) of the target in the array. If target is not present return -1.

### Examples:
#### Input:
arr[] = [10, 3, 40, 20, 50, 80, 70], target = 40
#### Output: 
2
#### Explanation: 
Index of 40 in the given array is 2.

#### Input: 
arr[] = [10, 3, 40, 20, 50, 80, 70], target = 90
#### Output:
-1
#### Explanation: 
90 is not present in the array.

#### Input:
arr[] = [-20], target = -20
#### Output:
0
#### Explanation:
-20 is the only element present in the array.

### Constraints:
1 <= arr.size() <= $`10^5`$
$`-10^9`$ <= arr[i] <= $`10^9`$

