# Left View of Binary Tree
Given a Binary Tree, return Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to complete the function leftView(), which accepts root of the tree as argument. If no left view is possible, return an empty tree.

Left view of following tree is 1 2 4 8.

          1
       /     \
     2        3
   /     \    /    \
  4     5   6    7
   \
     8   

### Examples:
#### Input:
   1
 /  \
3    2
#### Output:
1 3

#### Input:
![image](https://github.com/user-attachments/assets/faac2209-a8ee-46e9-bd16-413c394e5901)
#### Output: 
10 20 40

###### Expected Time Complexity: O(N).
###### Expected Auxiliary Space: O(N).

### Constraints:
0 <= Number of nodes <= $`10^5`$
0 <= Data of a node <= $`10^5`$

