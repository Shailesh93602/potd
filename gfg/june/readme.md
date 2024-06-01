# Odd Even Problem
Given a string s of lowercase English characters, find out whether the summation of x and y is even or odd, where x is the count of distinct characters that occupy even positions in English alphabets and have even frequency, y is the count of distinct characters which occupy odd positions in English alphabets and have odd frequency.
Note: Positive means greater than zero.

### Example 1:
#### Input: 
s = "abbbcc"
#### Output: 
ODD
#### Explanation: 
x = 0 and y = 1 so (x + y) is ODD. 'a' occupies 1st place(odd) in english alphabets and its frequency is odd(1), 'b' occupies 2nd place(even) but its frequency is odd(3) so it doesn't get counted and 'c' occupies 3rd place(odd) but its frequency is even(2) so it also doesn't get counted.

### Example 2:
#### Input: 
s = "nobitaa"
#### Output: 
EVEN
#### Explanation: 
x = 0 and y = 2 so (x + y) is EVEN.

### Your Task:  
You don't need to read input or print anything. Complete the function evenOdd() which takes s as input parameter and returns "EVEN"  if  x + y is even, and returns "ODD" otherwise.

###### Expected Time Complexity: O(|s|)
###### Expected Auxiliary Space: O(1) 

### Constraints:
1 ≤ |s| ≤ $`10^5`$


