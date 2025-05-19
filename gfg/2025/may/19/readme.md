# Predecessor and Successor
You are given root node of the BST and an integer key. You need to find the in-order successor and predecessor of the given key. If either predecessor or successor is not found, then set it to NULL.

**Note:-** In an inorder traversal the number just smaller than the target is the predecessor and the number just greater than the target is the successor. 

### Examples:
#### Input:
root[] = [8, 1, 9, N, 4, N, 10, 3, N, N, N], key = 8
![image](https://github.com/user-attachments/assets/703913d7-a7e5-409a-9e81-5f6e08aaeb29)
#### Output:
4 9
#### Explanation: 
In the given BST the inorder predecessor of 8 is 4 and inorder successor of 8 is 9.

#### Input:
root[] = [10, 2, 11, 1, 5, N, N, N, N, 3, 6, N, 4, N, N], key = 11
![image](https://github.com/user-attachments/assets/4ee06be2-f6cd-4701-bed1-95460e4d043c)
#### Output: 
10 -1
#### Explanation:
In given BST, the inorder predecessor of 11 is 10 whereas it does not have any inorder successor.

#### Input: 
root[] = [2, 1, 3], key = 3
![image](https://github.com/user-attachments/assets/344d434e-08e2-4439-8440-048674553feb)
#### Output: 
2 -1
#### Explanation: 
In given BST, the inorder predecessor of 3 is 2 whereas it does not have any inorder successor.

### Constraints: 
1 <= no. of nodes <= $`10^5`$
1 <= node->data <= $`10^6`$
1 <= key <= $`10^6`$


