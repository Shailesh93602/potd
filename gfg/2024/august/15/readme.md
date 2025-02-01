# Add 1 to a Linked List Number
You are given a linked list where each element in the list is a node and have an integer data. You need to add 1 to the number formed by concatinating all the list node numbers together and return the head of the modified linked list. 

Note: The head represents the first element of the given array.

### Examples:
#### Input:
LinkedList: 4->5->6
#### Output:
457
![image](https://github.com/user-attachments/assets/7a52519e-a60e-40fe-9712-5abbe7d288a7)
#### Explanation:
4->5->6 represents 456 and when 1 is added it becomes 457. 

#### Input:
LinkedList: 1->2->3
#### Output: 
124
![image](https://github.com/user-attachments/assets/9f6dd6d0-4be9-4c24-99ee-307f5eba73bb)
#### Explanation: 
1->2->3 represents 123 and when 1 is added it becomes 124. 

###### Expected Time Complexity: O(n)
###### Expected Auxiliary Space: O(1)

### Constraints:
1 <= len(list) <= $`10^5`$
0 <= list[i] <= $`10^5`$


