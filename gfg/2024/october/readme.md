# Multiply two linked lists
Given elements as nodes of the two singly linked lists. The task is to multiply these two linked lists, say L1 and L2.

**Note:** The output could be large take modulo 10^9+7.

### Examples:
#### Input: 
LinkedList L1 : 3->2 , LinkedList L2 : 2
#### Output:
64
#### Explanation: 
![image](https://github.com/user-attachments/assets/8f997983-2705-4522-b9fb-394ec97e82b5)
Multiplication of 32 and 2 gives 64.

#### Input:
LinkedList L1: 1->0->0 , LinkedList L2 : 1->0
#### Output:
1000
#### Explanation: 
![image](https://github.com/user-attachments/assets/60bc497c-40b6-44a9-a3f7-0d77c40ec412)
Multiplication of 100 and 10 gives 1000.

###### Expected Time Complexity: O(max(n,m))
###### Expected Auxilliary Space: O(1)
where n is the size of L1 and m is the size of L2

### Constraints:
1 <= number of nodes <= $`10^5`$
1 <= node->data <= $`10^3`$

