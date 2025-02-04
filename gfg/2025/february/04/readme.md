# Diameter of a Binary Tree
Given a binary tree, the diameter (also known as the width) is defined as the number of edges on the longest path between two leaf nodes in the tree. This path may or may not pass through the root. Your task is to find the diameter of the tree.

### Examples:
#### Input: 
root[] = [1, 2, 3]
![image](https://github.com/user-attachments/assets/d6110a33-ebfb-4334-9be7-0316acdcf2ae)
#### Output:
2
#### Explanation:
The longest path has 2 edges (node 2 -> node 1 -> node 3).
![image](https://github.com/user-attachments/assets/b3d58155-63a4-4876-9f81-e0a84cfa62cc)

#### Input: 
root[] = [5, 8, 6, 3, 7, 9]
![image](https://github.com/user-attachments/assets/65dde11b-d384-424a-bc47-e4d3c5169c09)
#### Output:
4
#### Explanation: 
The longest path has 4 edges (node 3 -> node 8 -> node 5 -> node 6 -> node 9).
![image](https://github.com/user-attachments/assets/57709d3a-bcb3-4b31-a857-051387073c75)

### Constraints:
1 ≤ number of nodes ≤ $`10^5`$
0 ≤ node->data ≤ $`10^5`$


