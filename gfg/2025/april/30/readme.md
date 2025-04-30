# Find length of Loop
Given the head of a linked list, determine whether the list contains a loop. If a loop is present, return the number of nodes in the loop, otherwise return 0.

**Note:** 'c' is the position of the node which is the next pointer of the last node of the linkedlist. If c is 0, then there is no loop.

### Examples:
#### Input:
head: 25 → 14 → 19 → 33 → 10 → 21 → 39 → 90 → 58 → 45, c = 4
#### Output: 
7
#### Explanation:
The loop is from 33 to 45. So length of loop is 33 → 10 → 21 → 39 → 90 → 58 → 45 = 7.
The number 33 is connected to the last node of the linkedlist to form the loop because according to the input the 4th node from the beginning(1 based indexing) 
will be connected to the last node in the LinkedList.
![image](https://github.com/user-attachments/assets/705d779e-ef4e-4e21-a9c7-95bbef6e754a)

#### Input:
head: 0 → 1 → 2 → 3, c = 0
#### Output:
0
#### Explanation:
There is no loop.
![image](https://github.com/user-attachments/assets/c3a0ee19-d730-4cd1-91ab-8be5d14efe82)

### Constraints:
1 ≤ no. of nodes ≤ $`10^6`$
0 ≤ node.data ≤ $`10^6`$
0 ≤ c ≤ n-1

