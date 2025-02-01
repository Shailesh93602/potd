# Delete node in Doubly Linked List
Given a doubly Linked list and a position. The task is to delete a node from a given position (position starts from 1) in a doubly linked list and return the head of the doubly Linked list.

### Examples:
#### Input:
LinkedList = 1 <--> 3 <--> 4, x = 3
#### Output:
1 3  
#### Explanation: 
After deleting the node at position 3 (position starts from 1),the linked list will be now as 1 <--> 3.
![image](https://github.com/Shailesh93602/potd/assets/87556206/6c4fa081-fb2b-400d-ab37-112e759679b7)
 
#### Input: 
LinkedList = 1 <--> 5 <--> 2 <--> 9, x = 1
#### Output:
5 2 9
#### Explanation:
![image](https://github.com/Shailesh93602/potd/assets/87556206/e8e5248f-29dd-4bf7-ae1a-60e4c724bcd6)

###### Expected Time Complexity: O(n)
###### Expected Auxilliary Space: O(1)

### Constraints:
2 <= size of the linked list(n) <= $`10^5`$
1 <= x <= n
1 <= node.data <= $`10^9`$

