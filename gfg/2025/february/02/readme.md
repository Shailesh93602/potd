# Level order traversal
Given a root of a binary tree with n nodes, the task is to find its level order traversal. Level order traversal of a tree is breadth-first traversal for the tree.

### Examples:
#### Input:
root[] = [1, 2, 3]
![image](https://github.com/user-attachments/assets/a1467752-8f7c-49d2-a4bd-91551f3abb0d)
#### Output: 
[[1], [2, 3]]

#### Input:
root[] = [10, 20, 30, 40, 50]
![image](https://github.com/user-attachments/assets/368fd293-327c-4762-b2d3-28b49f410a66)
#### Output:
[[10], [20, 30], [40, 50]]

#### Input:
root[] = [1, 3, 2, N, N, N, 4, 6, 5]
![image](https://github.com/user-attachments/assets/1f2b02de-26ed-4424-a5ec-83c97753604e)
#### Output: 
[[1], [3, 2], [4], [6, 5]]

### Constraints:
1 ≤ number of nodes ≤ $`10^5`$
0 ≤ node->data ≤ $`10^9`$
