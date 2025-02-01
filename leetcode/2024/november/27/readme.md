# 3243. Shortest Distance After Road Addition Queries I
You are given an integer n and a 2D integer array queries.

There are n cities numbered from 0 to n - 1. Initially, there is a unidirectional road from city i to city i + 1 for all 0 <= i < n - 1.

queries[i] = [ui, vi] represents the addition of a new unidirectional road from city ui to city vi. After each query, you need to find the length of the shortest path from city 0 to city n - 1.

Return an array answer where for each i in the range [0, queries.length - 1], answer[i] is the length of the shortest path from city 0 to city n - 1 after processing the first i + 1 queries.

### Example 1:
#### Input:
n = 5, queries = [[2,4],[0,2],[0,4]]
#### Output:
[3,2,1]
#### Explanation:
![image](https://github.com/user-attachments/assets/f1188410-359d-44ec-8ced-a7d7d14410e7)
After the addition of the road from 2 to 4, the length of the shortest path from 0 to 4 is 3.
![image](https://github.com/user-attachments/assets/affa6ea1-cd20-4d3f-9817-0fdafe6218e0)
After the addition of the road from 0 to 2, the length of the shortest path from 0 to 4 is 2.
![image](https://github.com/user-attachments/assets/df57ced3-ad22-4ae7-a972-e6471d206c82)
After the addition of the road from 0 to 4, the length of the shortest path from 0 to 4 is 1.

### Example 2:
#### Input:
n = 4, queries = [[0,3],[0,2]]
#### Output:
[1,1]
#### Explanation:
![image](https://github.com/user-attachments/assets/84f0bae1-e163-4a1b-8a7c-a8aa3db99eed)
After the addition of the road from 0 to 3, the length of the shortest path from 0 to 3 is 1.
![image](https://github.com/user-attachments/assets/6fccb713-5f85-4410-b263-0b58cec897c4)
After the addition of the road from 0 to 2, the length of the shortest path remains 1.

### Constraints:
3 <= n <= 500
1 <= queries.length <= 500
queries[i].length == 2
0 <= queries[i][0] < queries[i][1] < n
1 < queries[i][1] - queries[i][0]
There are no repeated roads among the queries.

