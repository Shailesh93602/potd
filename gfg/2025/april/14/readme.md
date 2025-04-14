# Alien Dictionary
A new alien language uses the English alphabet, but the order of letters is unknown. You are given a list of words[] from the alien language’s dictionary, where the words are claimed to be sorted lexicographically according to the language’s rules.

Your task is to determine the correct order of letters in this alien language based on the given words. If the order is valid, return a string containing the unique letters in lexicographically increasing order as per the new language's rules. If there are multiple valid orders, return any one of them.

However, if the given arrangement of words is inconsistent with any possible letter ordering, return an empty string ("").

A string a is lexicographically smaller than a string b if, at the first position where they differ, the character in a appears earlier in the alien language than the corresponding character in b. If all characters in the shorter word match the beginning of the longer word, the shorter word is considered smaller.

Your implementation will be tested using a driver code. It will print true if your returned order correctly follows the alien language’s lexicographic rules; otherwise, it will print false.

### Examples:
#### Input:
words[] = ["cb", "cba", "a", "bc"]
#### Output:
true
#### Explanation:
You need to return "cab" as the correct order of letters in the alien dictionary.

#### Input: 
words[] = ["ab", "aa", "a"]
#### Output:
""
#### Explanation: 
You need to return "" because "aa" is lexicographically larger than "a", making the order invalid.

#### Input: 
words[] = ["ab", "cd", "ef", "ad"]
#### Output:
""
#### Explanation: 
You need to return "" because "a" appears before "e", but then "e" appears before "a", which contradicts the ordering rules.

### Constraints:
1 <= words.length <= 500
1 <= words[i].length <= 100
words[i] consists only of lowercase English letters.

