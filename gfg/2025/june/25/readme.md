# Check if frequencies can be equal
Given a string s consisting only lowercase alphabetic characters, check whether it is possible to remove at most one character such that the  frequency of each distinct character in the string becomes same. Return true if it is possible; otherwise, return false.

### Examples:
#### Input:
s = "xyyz"
#### Output: 
true 
#### Explanation:
Removing one 'y' will make frequency of each distinct character to be 1.

#### Input: 
s = "xyyzz"
#### Output:
true
#### Explanation:
Removing one 'x' will make frequency of each distinct character to be 2.

#### Input:
s = "xxxxyyzz"
#### Output:
false
#### Explanation:
Frequency can not be made same by removing at most one character.

### Constraints:
1 ≤ s.size() ≤ $`10^5`$

