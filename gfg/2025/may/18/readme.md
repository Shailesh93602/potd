# Level Order in spiral form
Given a binary tree and the task is to find the spiral order traversal of the tree and return the list containing the elements.
Spiral order Traversal mean: Starting from level 0 for root node, for all the even levels we print the node's value from right to left and for all the odd levels we print the node's value from left to right.
For below tree, function should return [1, 2, 3, 4, 5, 6, 7]
![image](https://github.com/user-attachments/assets/10a8d0cd-0524-4d5f-81b0-6976aa1026cf)

### Examples:
#### Input: 
root = [1, 3, 2]
![image](https://github.com/user-attachments/assets/94d14ca5-7bef-4073-bf48-f222761706b6)
#### Output:
[1, 3, 2]
#### Explanation:
Start with root (1), print level 0 (right to left), then level 1 (left to right).

#### Input: 
root = [10, 20, 30, 40, 60]
![image](https://github.com/user-attachments/assets/d2989483-6547-4b54-93fa-02a8a2f50c1d)
#### Output: 
[10, 20, 30, 60, 40]
#### Explanation:
Start with root (10), print level 0 (right to left), level 1 (left to right), and continue alternating.

#### Input: 
root = [1, 2, N, 4]
![image](https://github.com/user-attachments/assets/32d01b37-bb79-4bf4-8bd9-c7da1b87665b)
#### Output: 
[1, 2, 4]
#### Explanation: 
Start with root (1), then level 1 (left to right), then level 2 (right to left).

### Constraints:
1 <= number of nodes <= $`10^5`$
0 <= node->data <= $`10^5`$

