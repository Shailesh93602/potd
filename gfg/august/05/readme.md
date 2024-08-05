# Bottom View of Binary Tree
Given a binary tree, return an array where elements represent the bottom view of the binary tree from left to right.

**Note:** If there are multiple bottom-most nodes for a horizontal distance from the root, then the latter one in the level traversal is considered. For example, in the below diagram, 3 and 4 are both the bottommost nodes at a horizontal distance of 0, here 4 will be considered.

                      20
                    /    \
                  8       22
                /   \     /   \
              5      3 4     25
                     /    \      
                 10       14

For the above tree, the output should be 5 10 4 14 25.

### Examples :
#### Input:
       1
     /   \
    3     2
#### Output:
3 1 2
#### Explanation:
First case represents a tree with 3 nodes and 2 edges where root is 1, left child of 1 is 3 and right child of 1 is 2.
![image](https://github.com/user-attachments/assets/f97dc245-2588-417b-9835-a302b56fd3df)
Thus bottom view of the binary tree will be 3 1 2.

#### Input:
         10
       /    \
      20    30
     /  \
    40   60
#### Output:
40 20 60 30

###### Expected Time Complexity: O(n)
###### Expected Auxiliary Space: O(n)

### Constraints:
1 <= Number of nodes <= $`10^5`$
1 <= Data of a node <= $`10^5`$

