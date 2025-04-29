# Sort a linked list of 0s, 1s and 2s
Given the head of a linked list where nodes can contain values 0s, 1s, and 2s only. Your task is to rearrange the list so that all 0s appear at the beginning, followed by all 1s, and all 2s are placed at the end.

### Examples:
#### Input: 
head = 1 → 2 → 2 → 1 → 2 → 0 → 2 → 2
![image](https://github.com/user-attachments/assets/54da61d3-998c-4c4d-baec-418f8f490e54)
#### Output:
0 → 1 → 1 → 2 → 2 → 2 → 2 → 2
![image](https://github.com/user-attachments/assets/b2c5cad0-f926-4c3e-9dd3-ba6aecc08fa9)
#### Explanation: 
All the 0s are segregated to the left end of the linked list, 2s to the right end of the list, and 1s in between.

#### Input: 
head = 2 → 2 → 0 → 1
![image](https://github.com/user-attachments/assets/04294977-36cf-497d-a6f1-9149778f32ed)
#### Output:
0 → 1 → 2 → 2
![image](https://github.com/user-attachments/assets/b36bbb26-d599-4b05-ae12-2fd094fcd489)
#### Explanation:
After arranging all the 0s, 1s and 2s in the given format, the output will be 0 → 1 → 2 → 2.

### Constraints:
1 ≤ no. of nodes ≤ $`10^6`$
0 ≤ node->data ≤ 2
