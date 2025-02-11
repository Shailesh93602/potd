# Check for BST
Given the root of a binary tree. Check whether it is a BST or not.
Note: We are considering that BSTs can not contain duplicate Nodes.
A BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.

### Examples:
#### Input: 
root = [2, 1, 3, N, N, N, 5]
![image](https://github.com/user-attachments/assets/afc4d950-cda0-41fe-9ef8-c9731d73babe)
#### Output:
true 
#### Explanation:
The left subtree of every node contains smaller keys and right subtree of every node contains greater keys. Hence, the tree is a BST.

#### Input:
root = [2, N, 7, N, 6, N, 9] 
![image](https://github.com/user-attachments/assets/15f2bc5e-8f12-42de-a57b-7034a2d8bcc3)
#### Output: 
false 
#### Explanation:
Since the node to the right of node with key 7 has lesser key value, hence it is not a valid BST.

#### Input:
root = [10, 5, 20, N, N, 9, 25]
![image](https://github.com/user-attachments/assets/50593c40-97b1-40a0-82bd-60cecefe2d06)
#### Output:
false
#### Explanation: 
The node with key 9 present in the right subtree has lesser key value than root node.

### Constraints:
1 ≤ number of nodes ≤ $`10^5`$
1 ≤ node->data ≤ $`10^9`$

