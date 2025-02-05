# Mirror Tree
Given a binary tree, convert the binary tree to its Mirror tree.

Mirror of a Binary Tree T is another Binary Tree M(T) with left and right children of all non-leaf nodes interchanged.     

### Examples:
#### Input:
root[] = [1, 2, 3, N, N, 4]
#### Output: 
[1, 3, 2, N, 4]
#### Explanation: 
![image](https://github.com/user-attachments/assets/741c76ac-5a0e-4774-8244-24529e202582)
In the inverted tree, every non-leaf node has its left and right child interchanged.

#### Input:
root[] = [1, 2, 3, 4, 5]
#### Output:
[1, 3, 2, N, N, 5, 4]
#### Explanation:
![image](https://github.com/user-attachments/assets/098bccc9-2799-4916-b794-ba262f408d0a)
In the inverted tree, every non-leaf node has its left and right child interchanged.

### Constraints:
1 ≤ number of nodes ≤ $`10^5`$
1 ≤ node->data ≤ $`10^5`$


