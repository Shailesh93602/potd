# Root to Leaf Paths
Given a Binary Tree, you need to find all the possible paths from the root node to all the leaf nodes of the binary tree.

Note: The paths should be returned such that paths from the left subtree of any node are listed first, followed by paths from the right subtree.

### Examples:
#### Input:
root[] = [1, 2, 3, 4, 5, N, N]
ex-3
![image](https://github.com/user-attachments/assets/02c5cd52-6977-424b-a69b-a45a30a514d9)
#### Output: 
[[1, 2, 4], [1, 2, 5], [1, 3]]
#### Explanation:
All the possible paths from root node to leaf nodes are: 1 -> 2 -> 4, 1 -> 2 -> 5 and 1 -> 3

#### Input: 
root[] = [1, 2, 3]
![image](https://github.com/user-attachments/assets/74c1bf1a-af47-4410-bbe7-4636c3517127)
#### Output:
[[1, 2], [1, 3]] 
#### Explanation:
All the possible paths from root node to leaf nodes are: 1 -> 2 and 1 -> 3

#### Input: 
root[] = [10, 20, 30, 40, 60, N, N]
![image](https://github.com/user-attachments/assets/6eff34fd-d938-4710-b209-c53b581cc424)
#### Output: 
[[10, 20, 40], [10, 20, 60], [10, 30]]
#### Explanation:
All the possible paths from root node to leaf nodes are: 10 -> 20 -> 40, 10 -> 20 -> 60 and 10 -> 30

### Constraints:
1 <= number of nodes <= $`10^4`$
1 <= node->data <= $`10^4`$


