# Case-specific Sorting of Strings
Given a string s consisting of only uppercase and lowercase characters. The task is to sort uppercase and lowercase letters separately such that if the ith place in the original string had an Uppercase character then it should not have a lowercase character after being sorted and vice versa.

### Examples:
#### Input: 
s = "GEekS"
#### Output: 
EGekS
#### Explanation:
Sorted form of given string with the same case of character will result in output as EGekS.

#### Input:
s = "XWMSPQ"
#### Output: 
MPQSWX
#### Explanation: 
Since all characters are of the same case We can simply perform a sorting operation on the entire string.

### Constraints:
1 ≤ s.length() ≤ $`10^5`$

