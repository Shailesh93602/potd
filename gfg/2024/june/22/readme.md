# Extract the Number from the String
Given a sentence containing several words and numbers. Find the largest number among them which does not contain 9. If no such number exists, return -1.

### Examples :
#### Input:
sentence="This is alpha 5057 and 97"
#### Output:
5057
#### Explanation:
5057 is the only number that does
not have a 9.

#### Input:
sentence="Another input 9007"
#### Output:
-1
#### Explanation: 
Since there is no number that
does not contain a 9,output is -1.

###### Expected Time Complexity: O(n)
###### Expected Auxillary Space: O(n)

### Constraints:
1 <= n <= $`10^6`$
1 <= answer <= $`10^18`$

n is the length of a given sentence.

