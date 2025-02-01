# Word Search
You are given a two-dimensional mat[][] of size n*m containing English alphabets and a string word. Check if the word exists on the mat. The word can be constructed by using letters from adjacent cells, either horizontally or vertically. The same cell cannot be used more than once.

### Examples:
#### Input:
mat[][] = [['T', 'E', 'E'], ['S', 'G', 'K'], ['T', 'E', 'L']], word = "GEEK"
#### Output:
true
#### Explanation:
![image](https://github.com/user-attachments/assets/08c016ec-3e17-4f8b-aaff-27df301dd849)
The letter cells which are used to construct the "GEEK" are colored.

#### Input:
mat[][] = [['T', 'E', 'U'], ['S', 'G', 'K'], ['T', 'E', 'L']], word = "GEEK"
#### Output:
false
#### Explanation:
![image](https://github.com/user-attachments/assets/508f583e-71e5-4e34-a211-d3de17d253ff)
It is impossible to construct the string word from the mat using each cell only once.

#### Input:
mat[][] = [['A', 'B', 'A'], ['B', 'A', 'B']], word = "AB"
#### Output:
true
#### Explanation:
![image](https://github.com/user-attachments/assets/949f5cf4-2842-4fbb-9a30-d2bf82f9c0db)
There are multiple ways to construct the word "AB".

### Constraints:
1 ≤ n, m ≤ 100
1 ≤ L ≤ n*m

