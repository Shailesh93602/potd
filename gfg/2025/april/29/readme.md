# Sort a linked list of 0s, 1s and 2s
Given the head of a linked list where nodes can contain values 0s, 1s, and 2s only. Your task is to rearrange the list so that all 0s appear at the beginning, followed by all 1s, and all 2s are placed at the end.

### Examples:
#### Input: 
head = 1 → 2 → 2 → 1 → 2 → 0 → 2 → 2
#### Output:
0 → 1 → 1 → 2 → 2 → 2 → 2 → 2
#### Explanation: 
All the 0s are segregated to the left end of the linked list, 2s to the right end of the list, and 1s in between.

#### Input: 
head = 2 → 2 → 0 → 1
#### Output:
0 → 1 → 2 → 2
#### Explanation:
After arranging all the 0s, 1s and 2s in the given format, the output will be 0 → 1 → 2 → 2.

### Constraints:
1 ≤ no. of nodes ≤ $`10^6`$
0 ≤ node->data ≤ 2
