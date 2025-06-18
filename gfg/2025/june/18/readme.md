# Find all possible palindromic partitions of a String
Given a string s, find all possible ways to partition it such that every substring in the partition is a palindrome.

### Examples:
#### Input:
s = "geeks"
#### Output: 
[[g, e, e, k, s], [g, ee, k, s]]
#### Explanation: 
[g, e, e, k, s] and [g, ee, k, s] are the only partitions of "geeks" where each substring is a palindrome.

#### Input: 
s = "abcba"
#### Output:
[[a, b, c, b, a], [a, bcb, a], [abcba]]
#### Explanation:
[a, b, c, b, a], [a, bcb, a] and [abcba] are the only partitions of "abcba" where each substring is a palindrome.

### Constraints:
1 ≤ s.size() ≤ 20

