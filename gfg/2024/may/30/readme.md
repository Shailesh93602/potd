# String Subsequence
Given two strings, s1 and s2, count the number of subsequences of string s1 equal to string s2.

Return the total count modulo 1e9+7.

### Example 1:
#### Input: 
s1 = geeksforgeeks
s2 = gks
#### Output:
4
#### Explaination: 
We can pick characters from s1 as a subsequence from indices {0,3,4}, {0,3,12}, {0,11,12} and {8,11,12}.So total 4 subsequences of s1 that are equal to s2.Example 2:

### Example 2:
#### Input: 
s1 = problemoftheday
s2 = geek
#### Output:
0
#### Explaination: 
No subsequence of string s1 is equal to string s2.

### Your Task:
You don't need to read input or print anything. Your task is to complete the function countWays() which takes the string s1 and s2 as input parameters and returns the number of subsequences of s1 equal to s2.

###### Expected Time Complexity: O(n*m)        [n and m are lengths of the strings s1 and s2]
###### Expected Auxiliary Space: O(n*m)           [n and m are lengths of the strings s1 and s2]

### Constraints:
1 ≤ n, m ≤ 500  [n and m are lengths of the strings s1 and s2]


