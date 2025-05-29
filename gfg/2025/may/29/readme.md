# Sum of nodes on the longest path
Given a binary tree root[], you need to find the sum of the nodes on the longest path from the root to any leaf node. If two or more paths have the same length, the path with the maximum sum of node values should be considered.

### Examples:
#### Input: 
root[] = [4, 2, 5, 7, 1, 2, 3, N, N, 6, N]
![image](https://github.com/user-attachments/assets/c802747b-b9a2-4a31-bbe4-67c54bbf593d)
#### Output: 
13
#### Explanation:
![image](https://github.com/user-attachments/assets/660c5ebd-8c12-452a-9658-b13ae6f39941)
The highlighted nodes (4, 2, 1, 6) above are part of the longest root to leaf path having sum = (4 + 2 + 1 + 6) = 13

#### Input:
root[] = [1, 2, 3, 4, 5, 6, 7]
![image](https://github.com/user-attachments/assets/0140bb9f-c813-489d-9a9c-3d933af80b50)
#### Output:
11
#### Explanation: 
![image](https://github.com/user-attachments/assets/03e7d9ec-4542-4cea-b866-90a7c56d38b6)
The longest root-to-leaf path is 1 -> 3 -> 7, with sum 11.

#### Input:
root[] = [10, 5, 15, 3, 7, N, 20, 1]
![image](https://github.com/user-attachments/assets/a4d6790b-24dc-41d0-9131-b35279932965)
#### Output: 
19
#### Explanation: 
![image](https://github.com/user-attachments/assets/02429631-6af8-4243-b98b-4dffae763270)
The longest root-to-leaf path is 10 -> 5 -> 3 -> 1 with a sum of 10 + 5 + 3 + 1 = 19.

### Constraints:
1 <= number of nodes <= $`10^6`$
0 <= node->data <= $`10^4`$

