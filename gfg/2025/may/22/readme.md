# Minimum Deletions
Given a string s, write a program to delete the minimum number of characters from the string so that the resultant string is a palindrome, while maintaining the order of characters.

### Examples:
#### Input:
s = "aebcbda"
#### Output:
2
#### Explanation: 
Remove characters 'e' and 'd'.

#### Input:
s = "geeksforgeeks"
#### Output: 
8
#### Explanation:
**To make "geeksforgeeks" a palindrome, the longest palindromic subsequence is "eefee" (length 5). The minimum deletions are:**
13 (length of s) - 5 = 8.

### Constraints:
1 ≤ s.size() ≤ $`10^3`$

