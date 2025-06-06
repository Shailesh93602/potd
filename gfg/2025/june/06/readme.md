# Search Pattern (Rabin-Karp Algorithm)
**Given two strings:**
A text string in which you want to search.

A pattern string that you are looking for within the text.

Return all positions (1-based indexing) where the pattern occurs as a substring in the text. If the pattern does not occur, return an empty list.

All characters in both strings are lowercase English letters (a to z).

### Examples:
#### Input: 
text = "birthdayboy", pattern = "birth"
#### Output: 
[1]
#### Explanation: 
The string "birth" occurs at index 1 in text.

#### Input: 
text = "geeksforgeeks", pattern = "geek"
#### Output:
[1, 9]
#### Explanation: 
The string "geek" occurs twice in text, one starts are index 1 and the other at index 9.

### Constraints:
1<= text.size() <= $`5*10^5`$
1<= pattern.size() <= text.size()

