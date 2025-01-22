# Add Number Linked Lists
Given the head of two singly linked lists num1 and num2 representing two non-negative integers. The task is to return the head of the linked list representing the sum of these two numbers.

For example, num1 represented by the linked list : 1 -> 9 -> 0, similarly num2 represented by the linked list: 2 -> 5. Sum of these two numbers is represented by 2 -> 1 -> 5.

**Note:** There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.

### Examples:
#### Input: 
num1 = 4 - > 5, num2 = 3 -> 4 -> 5
#### Output:
3 -> 9 -> 0
![image](https://github.com/user-attachments/assets/ffca5736-52e6-43dc-a9c1-b788d843a586)
#### Explanation:
Given numbers are 45 and 345. There sum is 390.

#### Input:
num1 = 0 -> 0 -> 6 -> 3, num2 = 0 -> 7 
#### Output: 
7 -> 0 
![image](https://github.com/user-attachments/assets/47be29fd-4273-4b7e-8e09-44b64d883f39)
#### Explanation:
Given numbers are 63 and 7. There sum is 70.

### Constraints:
1 <= size of both linked lists <= $`10^6`$
0 <= elements of both linked lists <= 9

