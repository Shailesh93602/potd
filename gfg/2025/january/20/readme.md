# Merge two sorted linked lists
Given the head of two sorted linked lists consisting of nodes respectively. The task is to merge both lists and return the head of the sorted merged list.

### Examples:
#### Input:
head1 = 5 -> 10 -> 15 -> 40, head2 = 2 -> 3 -> 20
#### Output:
2 -> 3 -> 5 -> 10 -> 15 -> 20 -> 40
#### Explanation:
![image](https://github.com/user-attachments/assets/d36506cb-496d-43cd-a49c-c23753fd33fb)

#### Input: 
head1 = 1 -> 1, head2 = 2 -> 4
#### Output: 
1 -> 1 -> 2 -> 4
#### Explanation:
![image](https://github.com/user-attachments/assets/352757c0-e7f8-430d-bf15-91818b29cad9)

### Constraints:
1 <= no. of nodes<= $`10^3`$
0 <= node->data <= $`10^5`$
