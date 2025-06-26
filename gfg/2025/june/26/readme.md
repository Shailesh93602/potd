# Game with String
Given a string s consisting of lowercase alphabets and an integer k, your task is to find the minimum possible value of the string after removing exactly k characters.

The value of the string is defined as the sum of the squares of the frequencies of each distinct character present in the string.

### Examples:
#### Input:
s = "abbccc", k = 2
#### Output: 
6
#### Explaination:
We remove two 'c' to get the value as 12 + 22 + 12 = 6 or We remove one 'b' and one 'c' to get the value 12 + 12 + 22 = 6.

#### Input: 
s = "aaab", k = 2
#### Output: 
2
#### Explaination:
We remove two 'a'. Now we get the value as 12 + 12 = 2.

### Constraints:
0 ≤ k ≤ s.length() ≤ $`10^5`$ 

