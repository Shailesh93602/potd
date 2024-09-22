# Longest Prefix Suffix
Given a string of characters, find the length of the longest proper prefix which is also a proper suffix.

**NOTE:** Prefix and suffix can be overlapping but they should not be equal to the entire string.

### Examples:
#### Input:
str = "abab"
#### Output:
2
#### Explanation: 
"ab" is the longest proper prefix and suffix. 

#### Input:
str = "aaaa"
#### Output: 
3
#### Explanation: 
"aaa" is the longest proper prefix and suffix. 

###### Expected Time Complexity: O(|str|)
###### Expected Auxiliary Space: O(|str|)

### Constraints:
1 ≤ |str| ≤ $`10^6`$
str contains lower case English alphabets


