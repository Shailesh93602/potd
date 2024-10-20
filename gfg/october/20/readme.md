# Sort a k sorted doubly linked list
Given a doubly linked list, each node is at most k-indices away from its target position. The problem is to sort the given doubly linked list. The distance can be assumed in either of the directions (left and right).

### Examples:
#### Input:
Doubly Linked List : 3 <-> 2 <-> 1 <-> 5 <-> 6 <-> 4 , k = 2
#### Output:
1 <-> 2 <-> 3 <-> 4 <-> 5 <-> 6
![image](https://github.com/user-attachments/assets/8f75d6f7-f10b-4550-a225-d61179a2d282)
#### Explanation:
After sorting the given 2-sorted list is 1 <-> 2 <-> 3 <-> 4 <-> 5 <-> 6.

#### Input: 
Doubly Linked List : 5 <-> 6 <-> 7 <-> 3 <-> 4 <-> 4 , k = 3
##### Output: 
3 <-> 4 <-> 4 <-> 5 <-> 6 <-> 7
![image](https://github.com/user-attachments/assets/f5f27293-0037-46b3-916f-3443186b8fe9)
#### Explanation:
After sorting the given 3-sorted list is 3 <-> 4 <-> 4 <-> 5 <-> 6 <-> 7.

**Expected Time Complexity:** O(n*logk)
**Expected Auxiliary Space:** O(k)

### Constraints:
1 <= number of nodes <= $`10^5`$
1 <= k < number of nodes
1 <= node->data <= $`10^9`$

