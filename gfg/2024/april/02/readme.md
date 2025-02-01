# Minimum absolute difference in BST
Given a binary search tree having n (n>1) nodes, the task is to find the minimum absolute difference between any two nodes.

## Problem Statement:-
https://www.geeksforgeeks.org/problems/minimum-absolute-difference-in-bst-1665139652/1

### Example 1:
#### Input:
Input tree

#### Output:
10
#### Explanation:
There are no two nodes whose absolute difference in smaller than 10.

### Example 2:
#### Input:
Input tree

#### Output:
20
#### Explanation:
There are no two nodes whose absolute difference in smaller than 20.

### Your Task:
You don't have to take any input. Just complete the function absolute_diff() , that takes root as input and return minimum absolute difference between any two nodes.

###### Expected Time Complexity: O(n)
###### Expected Auxiliary Space: O(1)

### Constraints:
2 <= n <= $`10^5`$
1 <= Node->data <= $`10^9`$