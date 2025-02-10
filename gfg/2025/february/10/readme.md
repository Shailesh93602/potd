# K Sum Paths
Given a binary tree and an integer k, determine the number of downward-only paths where the sum of the node values in the path equals k. A path can start and end at any node within the tree but must always move downward (from parent to child).

### Examples:
#### Input: 
k = 7   
![image](https://github.com/user-attachments/assets/cb027c8d-ba7d-43d9-96f8-4ee4681d18a6)
#### Output:
3
##### Explanation:
The following paths sum to k 
![image](https://github.com/user-attachments/assets/9c8ad625-b4de-4ff3-8008-1690d4b8b40c)

#### Input: 
k = 3
   1
  /  \
2     3
#### Output:
2
#### Explanation:
**Path 1:** 1 -> 2 (Sum = 3)
**Path 2:** 3 (Sum = 3)

### Constraints:
1 ≤ number of nodes ≤ $`10^4`$
-100 ≤ node value ≤ 100
-$`10^9`$ ≤ k ≤ $`10^9`$

