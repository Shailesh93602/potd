# Koko Eating Bananas
Koko is given an array arr[], where each element represents a pile of bananas. She has exactly k hours to eat all the bananas.
Each hour, Koko can choose one pile and eat up to s bananas from it.
If the pile has at least s bananas, she eats exactly s bananas.
If the pile has fewer than s bananas, she eats the entire pile in that hour.
Koko can only eat from one pile per hour.
Your task is to find the minimum value of s (bananas per hour) such that Koko can finish all the piles within k hours.

### Examples:
#### Input:
arr[] = [3, 6, 7, 11] , k = 8
#### Output:
4
#### Explanation: 
Koko eats at least 4 bananas per hour to finish all piles within 8 hours, as she can consume each pile in 1 + 2 + 2 + 3 = 8 hours.

#### Input: 
arr[] = [30, 11, 23, 4, 20], k = 5
#### Output:
30
#### Explanation:
With 30 bananas per hour, Koko completes each pile in 1 hour, totaling 5 hours, which matches k = 5.

#### Input:
arr[] = [5, 10, 15, 20], k = 7
#### Output:
10
#### Explanation:
At 10 bananas per hour, Koko finishes in 7 hours, just within the k = 7 limit.

### Constraint:
1 <= arr.size() <= $`10^5`$ 
1 <= arr[i] <= $`10^6`$
arr.size() <= k <= $`10^6`$

