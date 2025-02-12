# k-th Smallest in BST
Given a BST and an integer k, the task is to find the kth smallest element in the BST. If there is no kth smallest element present then return -1.

### Examples:
#### Input:
root = [2, 1, 3], k = 2
![image](https://github.com/user-attachments/assets/984b7c9b-0168-4bd2-91aa-d3b2d7747813)
#### Output: 
2
#### Explanation:
2 is the 2nd smallest element in the BST.

#### Input: 
root = [2, 1, 3], k = 5
![image](https://github.com/user-attachments/assets/4f7ee13e-6454-4fdb-b167-2c7bb72f3e48)
#### Output:
-1
#### Explanation: 
There is no 5th smallest element in the BST as the size of BST is 3.

#### Input:
root = [20, 8, 22, 4, 12, N, N, N, N, 10, 14], k = 3
![image](https://github.com/user-attachments/assets/41636aff-42f2-4370-a50e-809d6cd1d65b)
#### Output:
10
#### Explanation: 
10 is the 3rd smallest element in the BST.

### Constraints:
1 <= number of nodes, k <= $`10^5`$
1 <= node->data <= $`10^5`$


