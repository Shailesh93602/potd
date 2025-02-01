# Rotate and delete
Given an array arr integers. Do the following operation until a single element left. For every kth operation:

Right, rotate the vector clockwise by 1.
Delete the kth element from the last.
Now, find the element which is left at last.

### Example:
#### Input:
arr = [1, 2, 3, 4, 5, 6]
#### Output: 
3
#### Explanation:
Rotate the vector clockwise i.e. after rotation the vector arr = [6, 1, 2, 3, 4, 5] and delete the last element that is 5 that will be arr = [6, 1, 2, 3, 4]. Similarly, the output will be 3.

#### Input:
arr = [1, 2, 3, 4]
#### Output: 
2
#### Explanation:
Rotate the vector clockwise i.e. after rotation the vector arr = [4, 1, 2, 3] and delete the last element that is 3 that will be arr = [4, 1, 2]. Similarly, the output will be 2.

###### Expected Time Complexity: O(n)
###### Expected Auxiliary Space: O(1)

### Constraints:
1 <= arr.size() <= $`10^5`$
1 <= arr[i] <= $`10^6`$



