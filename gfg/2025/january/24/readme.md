# Detect Loop in linked list
You are given the head of a singly linked list. Your task is to determine if the linked list contains a loop. A loop exists in a linked list if the next pointer of the last node points to any other node in the list (including itself), rather than being null.

Custom Input format:
A head of a singly linked list and a pos (1-based index) which denotes the position of the node to which the last node points to. If pos = 0, it means the last node points to null, indicating there is no loop.

### Examples:
#### Input:
head: 1 -> 3 -> 4, pos = 2
#### Output:
true
#### Explanation: 
There exists a loop as last node is connected back to the second node.
![image](https://github.com/user-attachments/assets/ad2c292a-7ff1-461f-b471-72f86cfd9b11)

#### Input:
head: 1 -> 8 -> 3 -> 4, pos = 0
#### Output:
false
#### Explanation:
There exists no loop in given linked list.
![image](https://github.com/user-attachments/assets/c57ba580-b948-4e1b-9eec-775eacb57845)

#### Input: 
head: 1 -> 2 -> 3 -> 4, pos = 1
#### Output:
true
#### Explanation: 
There exists a loop as last node is connected back to the first node.
![image](https://github.com/user-attachments/assets/6a2cc7e8-39a6-4608-b7ba-617e8a4ea80a)

### Constraints:
1 ≤ number of nodes ≤ $`10^4`$
1 ≤ node->data ≤ $`10^3`$       
0 ≤ pos ≤ Number of nodes in Linked List
