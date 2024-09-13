# Mirror Tree
Given a Binary Tree, convert it into its mirror.
MirrorTree1            
![image](https://github.com/user-attachments/assets/dc1914dc-6f18-4d84-892d-537dfd533eaa)

### Examples:
#### Input:
      1
    /  \
   2    3
#### Output: 
3 1 2
#### Explanation: 
The tree is
   1    (mirror)  1
 /  \    =>      /  \
2    3          3    2
The inorder of mirror is 3 1 2

#### Input:
      10
     /  \
    20   30
   /  \
  40  60
#### Output:
30 10 60 20 40
#### Explanation: 
The tree is
      10               10
    /    \  (mirror) /    \
   20    30    =>   30    20
  /  \                   /   \
 40  60                 60   40
The inroder traversal of mirror is
30 10 60 20 40.

###### Expected Time Complexity: O(N).
###### Expected Auxiliary Space: O(Height of the Tree).

### Constraints:
1 ≤ Number of nodes ≤ $`10^5`$
1 ≤ Data of a node ≤ $`10^5`$

