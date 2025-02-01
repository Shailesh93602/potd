# 988. Smallest String Starting from Leaf
You are given the root of a binary tree where each node has a value in the range [0, 25] representing the letters 'a' to 'z'.

Return the lexicographically smallest string that starts at a leaf of this tree and ends at the root.

As a reminder, any shorter prefix of a string is lexicographically smaller.

For example, "ab" is lexicographically smaller than "aba".
A leaf of a node is a node that has no children. 

### Example 1:
![image](https://github.com/Shailesh93602/potd/assets/87556206/108b46d8-972f-47e0-8913-e909ea5a0c3b)
#### Input: 
root = [0,1,2,3,4,3,4]
#### Output: 
"dba"

### Example 2:
![image](https://github.com/Shailesh93602/potd/assets/87556206/b26a122c-c12f-4221-9794-f8cd792f23fd)
#### Input: 
root = [25,1,3,1,3,0,2]
#### Output: 
"adz"

### Example 3:
![image](https://github.com/Shailesh93602/potd/assets/87556206/aedab267-b154-46e8-99a0-c62069965d52)
#### Input: 
root = [2,2,1,null,1,0,null,0]
#### Output: 
"abc"
 
### Constraints:
The number of nodes in the tree is in the range [1, 8500].
0 <= Node.val <= 25

