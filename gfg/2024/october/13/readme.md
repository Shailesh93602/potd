# Delete Alternate Nodes
Given a Singly Linked List, Delete all alternate nodes of the list ie delete all the nodes present in even positions.

### Examples:
#### Input:
![image](https://github.com/user-attachments/assets/a5ea3844-bace-4786-adfd-4c81f9954ac2)
**LinkedList:** 1->2->3->4->5->6
#### Output: 
![image](https://github.com/user-attachments/assets/e1b4a59c-8db5-4076-a791-648655a3b4e0)
1->3->5
#### Explanation:
Deleting alternate nodes ie 2, 4, 6 results in the linked list with elements 1->3->5.

#### Input: 
![image](https://github.com/user-attachments/assets/f2ba1399-af91-468a-9001-5691fff3bfc2)
**LinkedList:** 99->59->42->20
#### Output:
![image](https://github.com/user-attachments/assets/36d61428-b9ee-48ad-a489-2e73a35db68f)
99->42
 
###### Expected Time Complexity: O(n)
###### Expected Auxiliary Space: O(1)

### Constraints:
1 <= number of nodes <= $`10^5`$
1 <= node->data <= $`10^3`$

