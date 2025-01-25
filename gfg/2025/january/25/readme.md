# Find the first node of loop in linked list
Given a head of the singly linked list. If a loop is present in the list then return the first node of the loop else return NULL.

Custom Input format:
A head of a singly linked list and a pos (1-based index) which denotes the position of the node to which the last node points to. If pos = 0, it means the last node points to null, indicating there is no loop.

### Examples:
#### Input:
![image](https://github.com/user-attachments/assets/0e8f692d-e984-4e7c-9002-8a7d17fda6af)
#### Output: 
3
#### Explanation:
We can see that there exists a loop in the given linked list and the first node of the loop is 3.

#### Input:
![image](https://github.com/user-attachments/assets/ee66f1ae-403f-4d2e-80bb-51a36ef992f6)
#### Output:
-1
#### Explanation:
No loop exists in the above linked list.So the output is -1.

### Constraints:
1 <= no. of nodes <= $`10^6`$
1 <= node->data <= $`10^6`$ 
