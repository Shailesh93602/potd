# Duplicate Subtrees
Given a binary tree, your task is to find all duplicate subtrees from the given binary tree.

Note:  Return the root of each tree in the form of a list array & the driver code will print the tree in pre-order tree traversal in lexicographically increasing order.

### Examples:
#### Input : 
![image](https://github.com/Shailesh93602/potd/assets/87556206/a7d7a940-1879-458a-b56d-c8b51c470283)
#### Output:
        2 4   
        4
#### Explanation:
The above tree have two duplicate subtrees.i.e 
  2
 /
4  and 4. Therefore, you need to return the above tree root in the form of a list.

#### Input:
           5
          / \
         4   6
        / \
       3   4
          / \
         3   6
#### Output:
4 3
        6
#### Explanation:
In the above tree, there are two duplicate subtrees.i.e
  4
 /
3   and 6. Therefore, you need to return the above subtrees root in the form of a list.

###### Expected Time Complexity: O(n)
###### Expected Space Complexity: O(n)

### Constraints:
1 <= size of binary tree <= 100


