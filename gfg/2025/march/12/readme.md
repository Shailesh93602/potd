# Min Cost Climbing Stairs
Given an array of integers cost[] where cost[i] is the cost of the ith step on a staircase. Once the cost is paid, you can either climb one or two steps. Return the minimum cost to reach the top of the floor.
Assume 0-based Indexing. You can either start from the step with index 0, or the step with index 1.

### Examples:
#### Input: 
cost[] = [10, 15, 20]
#### Output:
15
#### Explanation: 
Cheapest option is to start at cost[1], pay that cost, and go to the top.
![image](https://github.com/user-attachments/assets/dd76519a-8aeb-4d27-8827-9ec92b6830ab)

#### Input: 
cost[] = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
#### Output:
6
#### Explanation: 
Cheapest option is to start on cost[0], and only step on 1s, skipping cost[3].
![image](https://github.com/user-attachments/assets/1b80e3c6-7f1b-4745-bbe2-b75e014b08c6)

### Constraints:
2 ≤ cost.size() ≤ $`10^5`$
0 ≤ cost[i] ≤ 999

