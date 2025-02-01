# Deletion and Reverse in Circular Linked List
Given a Circular Linked List. The task is to delete the given node, key in the circular linked list, and reverse the circular linked list.

**Note:** You don't have to print anything, just return head of the modified list in each function.

### Examples:
#### Input: 
![image](https://github.com/user-attachments/assets/dba797b2-e286-42ee-9654-d775f73e8164)
Linked List: 2->5->7->8->10, key = 8
#### Output: 
![image](https://github.com/user-attachments/assets/6687b656-b5eb-491c-965d-e8508f03b31b)
10->7->5->2 
#### Explanation:
After deleting 8 from the given circular linked list, it has elements as 2, 5, 7, 10. Now, reversing this list will result in 10, 7, 5, 2.

#### Input:
![image](https://github.com/user-attachments/assets/ff66788c-a693-4649-afca-4150a303f914)
Linked List: 1->7->8->10, key = 8
#### Output:
![image](https://github.com/user-attachments/assets/384755e3-879f-4634-a7b0-abbcea29d3c4)
10->7->1
#### Explanation: 
After deleting 8 from the given circular linked list, it has elements as 1, 7,10. Now, reversing this list will result in 10, 7, 1.

###### Expected Time Complexity: O(n)
###### Expected Auxillary Space: O(1)

### Constraints:
2 <= number of nodes, key  <= $`10^5`$
1 <= node -> data <= $`10^5`$


