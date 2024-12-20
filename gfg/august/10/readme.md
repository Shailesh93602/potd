# Rotate a Linked List
Given the head of a singly linked list, the task is to rotate the linked list clockwise by k nodes, i.e., left-shift the linked list by k nodes, where k is a given positive integer smaller than or equal to length of the linked list.

### Examples:
#### Input:
linkedlist: 2->4->7->8->9 , k = 3
#### Output:
8->9->2->4->7
#### Explanation:
Rotate 1: 4 -> 7 -> 8 -> 9 -> 2
Rotate 2: 7 -> 8 -> 9 -> 2 -> 4
Rotate 3: 8 -> 9 -> 2 -> 4 -> 7
![image](https://github.com/user-attachments/assets/f60f604e-ffb4-47dc-a6f1-e38547e13fc5)

#### Input:
linkedlist: 1->2->3->4->5->6->7->8 , k = 4
#### Output: 
5->6->7->8->1->2->3->4
![image](https://github.com/user-attachments/assets/82c70380-e4e6-4cba-97bc-a088c81b20b6)

###### Expected Time Complexity: O(n)
###### Expected Auxiliary Space: O(1)

### Constraints:
1 <= number of nodes <= $`10^3`$
1 <= node -> data <= $`10^4`$
1 <= k <= number of nodes 

