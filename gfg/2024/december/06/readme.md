# Find H-Index
Given an integer array citations[], where citations[i] is the number of citations a researcher received for the ith paper. The task is to find the H-index.

H-Index is the largest value such that the researcher has at least H papers that have been cited at least H times.

### Examples:
#### Input:
citations[] = [3, 0, 5, 3, 0]
#### Output:
3
#### Explanation:
There are at least 3 papers (3, 5, 3) with at least 3 citations.

#### Input:
citations[] = [5, 1, 2, 4, 1]
#### Output:
2
#### Explanation:
There are atleast 2 papers (5, 2, 4) with atleast 2 citations.

#### Input:
citations[] = [0, 0]
#### Output:
0

### Constraints:
1 ≤ citations.size() ≤ $`10^6`$
0 ≤ citations[i] ≤ $`10^6`$

