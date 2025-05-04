# Smallest distinct window
Given a string str, your task is to find the length of the smallest window that contains all the characters of the given string at least once.

### Example:
#### Input:
str = "aabcbcdbca"
#### Output:
4
#### Explanation: 
Sub-String "dbca" has the smallest length that contains all the characters of str.

#### Input:
str = "aaab"
#### Output: 
2
#### Explanation: 
Sub-String "ab" has the smallest length that contains all the characters of str.

#### Input:
str = "geeksforgeeks"
#### Output: 
8
#### Explanation:
There are multiple substring with smallest length that contains all characters of str, "geeksfor" and "forgeeks". 

### Constraints:
1 ≤ str.size() ≤ $`10^5`$
str contains only lower-case english alphabets.

