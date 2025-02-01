# 1861. Rotating the Box
You are given an m x n matrix of characters box representing a side-view of a box. Each cell of the box is one of the following:

A stone '#'
A stationary obstacle '*'
Empty '.'
The box is rotated 90 degrees clockwise, causing some of the stones to fall due to gravity. Each stone falls down until it lands on an obstacle, another stone, or the bottom of the box. Gravity does not affect the obstacles' positions, and the inertia from the box's rotation does not affect the stones' horizontal positions.

It is guaranteed that each stone in box rests on an obstacle, another stone, or the bottom of the box.

Return an n x m matrix representing the box after the rotation described above.

### Example 1:
![image](https://github.com/user-attachments/assets/9bcfd242-1923-4746-941e-9d526af07ecc)
#### Input:
  box = [["#",".","#"]]
#### Output:
[["."],
["#"],
["#"]]

### Example 2:
![image](https://github.com/user-attachments/assets/1e2d87c1-dfeb-4da2-a779-02f7677b5301)
#### Input:
  box = [["#",".","*","."],
        ["#","#","*","."]]
#### Output:
  [["#","."],
  ["#","#"],
  ["*","*"],
  [".","."]]

### Example 3:
![image](https://github.com/user-attachments/assets/b27e5139-9700-477c-864f-5bebb55e0694)
#### Input:
  box = [["#","#","*",".","*","."],
        ["#","#","#","*",".","."],
        ["#","#","#",".","#","."]]
#### Output:
  [[".","#","#"],
  [".","#","#"],
  ["#","#","*"],
  ["#","*","."],
  ["#",".","*"],
  ["#",".","."]]
 
### Constraints:
m == box.length
n == box[i].length
1 <= m, n <= 500
box[i][j] is either '#', '*', or '.'.

