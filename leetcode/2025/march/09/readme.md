# 3208. Alternating Groups II
**There is a circle of red and blue tiles. You are given an array of integers colors and an integer k. The color of tile i is represented by colors[i]:**
colors[i] == 0 means that tile i is red.
colors[i] == 1 means that tile i is blue.
An alternating group is every k contiguous tiles in the circle with alternating colors (each tile in the group except the first and last one has a different color from its left and right tiles).

Return the number of alternating groups.

Note that since colors represents a circle, the first and the last tiles are considered to be next to each other.

### Example 1:
#### Input:
colors = [0,1,0,1,0], k = 3
#### Output:
3
#### Explanation:
![image](https://github.com/user-attachments/assets/4b72a648-4673-4e1a-99ac-a5b9714caf41)
Alternating groups:
![image](https://github.com/user-attachments/assets/c40e502d-bdc0-4964-a864-44dc00019b93)
![image](https://github.com/user-attachments/assets/f5ad9e95-234e-4f64-8dda-e6570df55863)
![image](https://github.com/user-attachments/assets/7bbf835d-e578-42bc-8c4e-835d425bced1)

### Example 2:
#### Input:
colors = [0,1,0,0,1,0,1], k = 6
#### Output:
2
#### Explanation:
![image](https://github.com/user-attachments/assets/dfec1bc8-f691-4d71-941b-a0dd0ef4d1b6)
Alternating groups:
![image](https://github.com/user-attachments/assets/096d317d-84e5-42e8-bca5-2e8750a40b93)
![image](https://github.com/user-attachments/assets/d5c865a5-2233-4be1-9d19-84fe91aee03d)

### Example 3:
#### Input:
colors = [1,1,0,1], k = 4
#### Output: 
0
#### Explanation:
![image](https://github.com/user-attachments/assets/a9bd3e53-c254-4ae1-bab1-a3f32145496a)

### Constraints:
3 <= colors.length <= $`10^5`$
0 <= colors[i] <= 1
3 <= k <= colors.length

