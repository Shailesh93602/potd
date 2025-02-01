# Vertical Width of a Binary Tree
Given a Binary Tree. You need to find and return the vertical width of the tree.

### Examples :
#### Input:
         1
       /    \
      2      3
     / \    /  \
    4   5  6   7
            \   \
             8   9
#### Output:
6
#### Explanation:
The width of a binary tree is
the number of vertical paths in that tree.
![image](https://github.com/Shailesh93602/potd/assets/87556206/4216cbad-7366-4f98-9bb0-068e32d7589f)
The above tree contains 6 vertical lines.

#### Input:
     1
    /  \
   2    3
#### Output:
3
#### Explanation:
The above tree has 3 vertical lines, hence the answer is 3.

###### Expected Time Complexity: O(n).
###### Expected Auxiliary Space: O(height of the tree).

### Constraints:
1 <= number of nodes <= $`10^4`$

