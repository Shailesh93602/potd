# Is Binary Tree Heap
You are given a binary tree, and the task is to determine whether it satisfies the properties of a max-heap.

A binary tree is considered a max-heap if it satisfies the following conditions:

**Completeness:**
Every level of the tree, except possibly the last, is completely filled, and all nodes are as far left as possible.
**Max-Heap Property:**
The value of each node is greater than or equal to the values of its children.

### Examples:
#### Input:
root[] = [97, 46, 37, 12, 3, 7, 31, 6, 9]
![image](https://github.com/user-attachments/assets/409c45d0-e726-4d59-bc73-eca56fd6b2ed)
#### Output:
true
#### Explanation:
The tree is complete and satisfies the max-heap property.

#### Input:
root[] = [97, 46, 37, 12, 3, 7, 31, N, 2, 4] 
![image](https://github.com/user-attachments/assets/d4bbfa8f-7212-4432-a8a0-4408e9287acf)
#### Output:
false
#### Explanation:
The tree is not complete and does not follow the Max-Heap Property, hence it is not a max-heap.

### Constraints:
1 ≤ number of nodes ≤ $`10^3`$
1 ≤ node->data ≤ $`10^3`$

