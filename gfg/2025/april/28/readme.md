# Maximum sum of Non-adjacent nodes
Given a binary tree with a value associated with each node. Your task is to select a subset of nodes such that the sum of their values is maximized, with the condition that no two selected nodes are directly connected that is, if a node is included in the subset, neither its parent nor its children can be included.

### Examples:
#### Input: 
root[] = [11, 1, 2]
![image](https://github.com/user-attachments/assets/e7c7077d-e067-4dcb-a529-0322c9eb0124)
#### Output: 
11
#### Explanation:
The maximum sum is obtained by selecting the node 11.
![image](https://github.com/user-attachments/assets/9f16eeeb-e88d-4112-9ba7-02ae8faeb361)

#### Input:
root[] = [1, 2, 3, 4, N, 5, 6]
![image](https://github.com/user-attachments/assets/bc7431cf-e037-49ad-a81f-e25298e67a80)
#### Output: 
16
#### Explanation:
The maximum sum is obtained by selecting the nodes 1, 4, 5, and 6, which are not directly connected to each other. Their total sum is 16.  
![image](https://github.com/user-attachments/assets/bd21a449-0d18-4f23-b353-5b431d030cc9)

### Constraints:
1 ≤ no. of nodes in the tree ≤ $`10^4`$
1 ≤ Node.val ≤ $`10^5`$

