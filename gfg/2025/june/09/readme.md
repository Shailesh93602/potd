# BST with Dead End
You are given a Binary Search Tree (BST) containing unique positive integers greater than 0.

Your task is to determine whether the BST contains a dead end.

Note: A dead end is a leaf node in the BST such that no new node can be inserted in the BST at or below this node while maintaining the BST property and the constraint that all node values must be > 0.

### Examples:
#### Input: 
root[] = [8, 5, 9, 2, 7, N, N, 1]
![image](https://github.com/user-attachments/assets/45c9eab8-02ba-4f8c-a850-300f69f0448f)
#### Output: 
true
#### Explanation: 
Node 1 is a Dead End in the given BST.

#### Input:
root[] = [8, 7, 10, 2, N, 9, 13]
![image](https://github.com/user-attachments/assets/7bc15dd6-3a56-48ba-97e1-258d9c09a238)
#### Output: 
true
#### Explanation: 
Node 9 is a Dead End in the given BST.

### Constraints:
1 <= number of nodes <= 3000
1 <= node->data <= $`10^5`$

