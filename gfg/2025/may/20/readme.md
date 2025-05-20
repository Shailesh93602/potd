# Burning Tree
Given a binary tree and a target node, determine the minimum time required to burn the entire tree if the target node is set on fire. In one second, the fire spreads from a node to its left child, right child, and parent.
**Note:** The tree contains unique values.

### Examples: 
#### Input:
root[] = [1, 2, 3, 4, 5, 6, 7], target = 2
![image](https://github.com/user-attachments/assets/2e17847b-4714-4f6b-aaa7-96f47107fed2)
#### Output:
3
#### Explanation:
Initially 2 is set to fire at 0 sec 
At 1 sec: Nodes 4, 5, 1 catches fire.
At 2 sec: Node 3 catches fire.
At 3 sec: Nodes 6, 7 catches fire.
It takes 3s to burn the complete tree.

#### Input: 
root[] = [1, 2, 3, 4, 5, N, 7, 8, N, 10], target = 10
![image](https://github.com/user-attachments/assets/c7d4b96c-f829-448d-8124-393b9c892256)
#### Output: 
5
#### Explanation: 
Initially 2 is set to fire at 0 sec 
At 1 sec: Node 5 catches fire.
At 2 sec: Node 2 catches fire.
At 3 sec: Nodes 1 and 4 catches fire.
At 4 sec: Node 3 and 8 catches fire.
At 5 sec: Node 7 catches fire.
It takes 5s to burn the complete tree.

### Constraints:
1 ≤ number of nodes ≤ $`10^5`$
1 ≤ node->data ≤ $`10^5`$
