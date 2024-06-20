# Integral Points Inside Triangle
Given three non-collinear points whose co-ordinates are p(p1, p2), q(q1, q2) and r(r1, r2) in the X-Y plane. Return the number of integral / lattice points strictly inside the triangle formed by these points.
Note: - A point in the X-Y plane is said to be an integral / lattice point if both its coordinates are integral.

### Examples
#### Input:
p = (0,0), q = (0,5), r = (5,0)
#### Output:
6
#### Explanation: 
![image](https://github.com/Shailesh93602/potd/assets/87556206/51c23919-7130-4e49-a468-c1aa2b71711c)
As shown in figure, points (1,1) (1,2) (1,3) (2,1) (2,2) and (3,1) are the integral points inside the triangle. So total 6 are there.

#### Input:
p = (62,-3), q = (5,-45), r = (-19,-23)
#### Output:
1129
#### Explanation: 
There are 1129 integral points in the triangle formed by p, q and r.

###### Expected Time Complexity: O(Log2109)
###### Expected Auxillary Space: O(1)

Constraints:
-$`10^9`$ ≤ x-coordinate, y-coordinate ≤ $`10^9`$

