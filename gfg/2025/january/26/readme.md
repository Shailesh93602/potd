# Remove loop in Linked List
Given the head of a linked list that may contain a loop.  A loop means that the last node of the linked list is connected back to a node in the same list. The task is to remove the loop from the linked list (if it exists).

**Custom Input format:**
A head of a singly linked list and a pos (1-based index) which denotes the position of the node to which the last node points to. If pos = 0, it means the last node points to null, indicating there is no loop.

The generated output will be true if there is no loop in list and other nodes in the list remain unchanged, otherwise, false.

###  Examples:
#### Input: 
head = 1 -> 3 -> 4, pos = 2
#### Output:
true
#### Explanation:
The linked list looks like
A loop is present in the list, and it is removed.
![image](https://github.com/user-attachments/assets/a713afef-621c-413f-aaf5-dc0601e85c07)

#### Input:
head = 1 -> 8 -> 3 -> 4, pos = 0
#### Output:
true
#### Explanation: 
The Linked list does not contains any loop. 
![image](https://github.com/user-attachments/assets/48cdc978-83f2-475d-8fcc-bfb0a529ba24)

#### Input:
head = 1 -> 2 -> 3 -> 4, pos = 1
#### Output:
true
#### Explanation: 
The linked list looks like 
A loop is present in the list, and it is removed.
![image](https://github.com/user-attachments/assets/81f12fe8-0349-4a77-b2cc-e39476c5841b)

### Constraints:
1 ≤ size of linked list ≤ $`10^5`$
