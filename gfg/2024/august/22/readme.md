# Alien Dictionary
Given a sorted dictionary of an alien language having N words and k starting alphabets of standard dictionary. Find the order of characters in the alien language.
Note: Many orders may be possible for a particular test case, thus you may return any valid order and output will be 1 if the order of string returned by the function is correct else 0 denoting incorrect string returned.
 
### Examples:
#### Input: 
N = 5, K = 4, dict = {"baa","abcd","abca","cab","cad"}
#### Output:
1
#### Explanation:
Here order of characters is 'b', 'd', 'a', 'c' Note that words are sorted and in the given language "baa" comes before "abcd", therefore 'b' is before 'a' in output.
Similarly we can find other orders.

#### Input: 
N = 3, K = 3, dict = {"caa","aaa","aab"}
#### Output:
1
#### Explanation: 
Here order of characters is 'c', 'a', 'b' Note that words are sorted and in the given language "caa" comes before "aaa", therefore 'c' is before 'a' in output.
Similarly we can find other orders.

###### Expected Time Complexity: O(N * |S| + K) , where |S| denotes maximum length.
###### Expected Space Compelxity: O(K)

### Constraints:
1 ≤ N ≤ $`10^4`$
1 ≤ K ≤ 26
1 ≤ Length of words ≤ 50


