# Pair Sum in BST
Given a Binary Search Tree(BST) and a target. Check whether there's a pair of Nodes in the BST with value summing up to the target. 

### Examples:
#### Input: 
root = [7, 3, 8, 2, 4, N, 9], target = 12
       bst
![image](https://github.com/user-attachments/assets/2f35bcd1-27a3-40ff-a3cf-ce71bf4c7899)
#### Output:
True
#### Explanation: 
In the binary tree above, there are two nodes (8 and 4) that add up to 12.

#### Input:
root = [9, 5, 10, 2, 6, N, 12], target = 23
          bst-3
![image](https://github.com/user-attachments/assets/aebfe3dd-6c09-4238-827e-be963dd64db3)
#### Output:
False
#### Explanation:
In the binary tree above, there are no such two nodes exists that add up to 23.

### Constraints:
1 ≤ Number of Nodes ≤ $`10^5`$
1 ≤ target ≤ $`10^6`$

