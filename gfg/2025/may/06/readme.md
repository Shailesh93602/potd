# Left View of Binary Tree
You are given the root of a binary tree. Your task is to return the left view of the binary tree. The left view of a binary tree is the set of nodes visible when the tree is viewed from the left side.

If the tree is empty, return an empty list.

### Examples:
#### Input: 
root[] = [1, 2, 3, 4, 5, N, N]
![image](https://github.com/user-attachments/assets/5c06979a-9b80-42e8-b155-9c77018a51ba)
#### Output: 
[1, 2, 4]
#### Explanation:
From the left side of the tree, only the nodes 1, 2, and 4 are visible.
![image](https://github.com/user-attachments/assets/20395de7-ac20-4dfd-984a-2e255daea920)

#### Input:
root[] = [1, 2, 3, N, N, 4, N, N, 5, N, N]
![image](https://github.com/user-attachments/assets/ab45fd6e-5bd4-4de4-b2cd-d4a9cbae7f82)
#### Output: 
[1, 2, 4, 5]
#### Explanation:
From the left side of the tree, the nodes 1, 2, 4, and 5 are visible.
![image](https://github.com/user-attachments/assets/9654da41-a3d0-4b0b-92a7-e5e8d88f35ba)

#### Input:
root[] = [N]
#### Output:
[]

### Constraints:
0 <= number of nodes <= $`10^6`$
0 <= node -> data <= $`10^5`$
