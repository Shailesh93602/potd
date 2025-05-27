# Print leaf nodes from preorder traversal of BST
Given a preorder traversal of a BST, find the leaf nodes of the tree without building the tree.

### Examples:
#### Input:
preorder[] = [5, 2, 10]
#### Output: 
[2, 10]
#### Explaination: 
![image](https://github.com/user-attachments/assets/494cf146-b8e1-46c0-9175-3d74d693cd40)
2 and 10 are the leaf nodes as shown in the figure.

#### Input:
preorder[] = [4, 2, 1, 3, 6, 5]
#### Output:
[1, 3, 5]
#### Explaination: 
![image](https://github.com/user-attachments/assets/85c8250e-68a3-40ca-b1d5-58b0dcc49017)
1, 3 and 5 are the leaf nodes as shown in the figure.

#### Input: 
preorder[] = [8, 2, 5, 10, 12]
#### Output:
[5, 12]
#### Explaination: 
![image](https://github.com/user-attachments/assets/109a298b-726a-441b-ac1b-3aece4e2688a)
5 and 12 are the leaf nodes as shown in the figure.

### Constraints:
1 ≤ preorder.size() ≤ $`10^3`$
1 ≤ preorder[i] ≤ $`10^3`$

