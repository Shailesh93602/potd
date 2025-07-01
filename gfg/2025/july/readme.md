# Substrings of length k with k-1 distinct elements
Given a string s consisting only lowercase alphabets and an integer k. Find the count of all substrings of length k which have exactly k-1 distinct characters.

### Examples:
#### Input: 
s = "abcc", k = 2
#### Output:
1
#### Explaination: 
Possible substring of length k = 2 are,
ab : 2 distinct characters
bc : 2 distinct characters
cc : 1 distinct characters
Only one valid substring so, count is equal to 1.

#### Input: 
"aabab", k = 3
#### Output:
3
#### Explaination: 
Possible substring of length k = 3 are, 
aab : 2 distinct charcters
aba : 2 distinct characters
bab : 2 distinct characters
All these substring are valid so, the total count is equal to 3.

### Constrains:
1 ≤ s.size() ≤ $`10^5`$
2 ≤ k ≤ 27



