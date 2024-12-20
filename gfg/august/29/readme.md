# Find length of Loop
Given the head of a linked list, determine whether the list contains a loop. If a loop is present, return the number of nodes in the loop, otherwise return 0.
![image](https://github.com/user-attachments/assets/1e45c850-f9fc-42bf-b852-f7047991de78)

**Note:** 'c' is the position of the node which is the next pointer of the last node of the linkedlist. If c is 0, then there is no loop.

### Examples:
#### Input: 
LinkedList: 25->14->19->33->10->21->39->90->58->45, c = 4
#### Output: 
7
#### Explanation: 
The loop is from 33 to 45. So length of loop is 33->10->21->39-> 90->58->45 = 7. 
The number 33 is connected to the last node of the linkedlist to form the loop because according to the input the 4th node from the beginning(1 based indexing) 
will be connected to the last node for the loop.
![image](https://github.com/user-attachments/assets/6c7cf12e-60e4-44da-8a99-2f0efe0d57c4)

#### Input:
LinkedList: 5->4, c = 0
#### Output:
0
#### Explanation:
There is no loop.
![image](https://github.com/user-attachments/assets/942ec589-8ed7-4fba-898b-84c2d4333b22)

###### Expected Time Complexity: O(n)
###### Expected Auxiliary Space: O(1)

### Constraints:
1 <= no. of nodes <= $`10^6`$
0 <= node.data <= $`10^6`$
0 <= c<= n-1


