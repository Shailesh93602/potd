# Insert in Sorted Circular Linked List
Given a sorted circular linked list, the task is to insert a new node in this circular linked list so that it remains a sorted circular linked list.

### Examples:
#### Input: 
head = 1->2->4, data = 2
#### Output: 
1->2->2->4
#### Explanation:
We can add 2 after the second node.
![image](https://github.com/user-attachments/assets/e0502939-b976-4a22-b06c-0454ee86bbc7)

#### Input: head = 1->4->7->9, data = 5
#### Output:
1->4->5->7->9
#### Explanation:
We can add 5 after the second node.
![image](https://github.com/user-attachments/assets/0ba07272-dbf7-4673-be57-2378a05afc95)

### Constraints:
2 <= number of nodes <= $`10^6`$
0 <= node->data <= $`10^6`$
0 <= data <= $`10^6`$

