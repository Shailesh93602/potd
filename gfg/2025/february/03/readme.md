# Height of Binary Tree
Given a binary tree, find its height.

The height of a tree is defined as the number of edges on the longest path from the root to a leaf node. A leaf node is a node that does not have any children.

### Examples:
#### Input: 
root[] = [12, 8, 18, 5, 11] 
![image](https://github.com/user-attachments/assets/5e1a9f68-25c1-4ab5-af6d-52a0afae0bf6)
#### Output:
2
#### Explanation:
One of the longest path from the root (node 12) goes through node 8 to node 5, which has 2 edges.

#### Input: 
root[] = [1, 2, 3, 4, N, N, 5, N, N, 6, 7]  
![image](https://github.com/user-attachments/assets/84a89306-da66-4b9a-abef-44e3eb13d6cd)
#### Output:
3
#### Explanation: 
The longest path from the root (node 1) to a leaf node 6 with 3 edge.

### Constraints:
1 <= number of nodes <= $`10^5`$
0 <= node->data <= $`10^5`$

