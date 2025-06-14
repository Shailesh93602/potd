# Symmetric Tree
Given the root of a binary tree, check whether it is symmetric, i.e., whether the tree is a mirror image of itself.

A binary tree is symmetric if the left subtree is a mirror reflection of the right subtree.

### Examples:
#### Input: 
root[] = [1, 2, 2, 3, 4, 4, 3]
   ex-1_1
![image](https://github.com/user-attachments/assets/e56d47ef-a5e4-4386-ae63-dbfa58d09a2e)
#### Output: 
True
#### Explanation:
As the left and right half of the above tree is mirror image, tree is symmetric.

#### Input:
root[] = [1, 2, 2, N, 3, N, 3]
   ex-2_1
![image](https://github.com/user-attachments/assets/82a08e6c-f192-48eb-a2e2-75961f013e0f)
#### Output:
False
#### Explanation:
As the left and right half of the above tree is not the mirror image, tree is not symmetric. 

### Constraints:
1  ≤ number of nodes ≤ 2000

