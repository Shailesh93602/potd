# Find the longest string
Given an array of strings words[]. Find the longest string in words[] such that every prefix of it is also present in the array words[]. 

**Note:** If multiple strings have the same maximum length, return the lexicographically smallest one.

### Examples:
#### Input: 
words[] = ["p", "pr", "pro", "probl", "problem", "pros", "process", "processor"]
#### Output:
pros
#### Explanation:
"pros" is the longest word with all prefixes ("p", "pr", "pro", "pros") present in the array words[].

#### Input:
words[] = ["ab", "a", "abc", "abd"]
#### Output:
abc
#### Explanation:
Both "abc" and "abd" has all the prefixes in words[]. Since, "abc" is lexicographically smaller than "abd", so the output is "abc".

### Constraints:
1 ≤ words.length() ≤ $`10^3`$
1 ≤ words[i].length ≤ $`10^3`$

