# Lowest Common Ancestor in a BST
Given a Binary Search Tree (with all values unique) and two nodes n1 and n2 (n1 != n2). You may assume that both nodes exist in the tree. Find the Lowest Common Ancestor (LCA) of the given two nodes in the BST.

LCA between two nodes n1 and n2 is defined as the lowest node that has both n1 and n2 as descendants (where we allow a node to be a descendant of itself).

### Examples:
#### Input: 
root = [5, 4, 6, 3, N, N, 7, N, N, N, 8], n1 = 7, n2 = 8    
![image](https://github.com/user-attachments/assets/aca4fe1d-68c7-499b-a428-e5a13bafc69b)
#### Output: 
7
#### Explanation:
7 is the closest node to both 7 and 8, which is also an ancestor of both the nodes.

#### Input:
root = [20, 8, 22, 4, 12, N, N, N, N, 10, 14], n1 = 8, n2 = 14
![image](https://github.com/user-attachments/assets/5359133e-6256-4dec-8c7e-824aac35f994)
#### Output:
8
#### Explanation: 
8 is the closest node to both 8 and 14, which is also an ancestor of both the nodes.

#### Input: 
root = [2, 1, 3], n1 = 1, n2 = 3        
![image](https://github.com/user-attachments/assets/27d5d8f6-c34d-4f3a-ad95-f6cf7ec1352f)
#### Output: 
2
#### Explanation: 
2 is the closest node to both 1 and 3, which is also an ancestor of both the nodes.

### Constraints:
1 <= number of nodes <= $`10^5`$
1 <= node->data <= $`10^5`$
1 <= n1, n2 <= $`10^5`$


