# Split array in three equal sum subarrays
Given an array, arr[], determine if arr can be split into three consecutive parts such that the sum of each part is equal. If possible, return any index pair(i, j) in an array such that sum(arr[0..i]) = sum(arr[i+1..j]) = sum(arr[j+1..n-1]), otherwise return an array {-1,-1}.

**Note:** Driver code will print true if arr can be split into three equal sum subarrays, otherwise, it is false.

### Examples :
#### Input:
arr[] = [1, 3, 4, 0, 4]
#### Output:
true
#### Explanation:
[1, 2] is valid pair as sum of subarray arr[0..1] is equal to sum of subarray arr[2..3] and also to sum of subarray arr[4..4]. The sum is 4. 

#### Input:
arr[] = [2, 3, 4]
#### Output:
false
#### Explanation:
No three subarrays exist which have equal sum.

#### Input:
arr[] = [0, 1, 1]
#### Output:
false

### Constraints:
3 ≤ arr.size() ≤ $`10^6`$
0 ≤ arr[i] ≤ $`10^6`$



