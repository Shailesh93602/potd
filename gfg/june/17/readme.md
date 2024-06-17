# Check If two Line segments Intersect
Given the coordinates of the endpoints(p1,q1, and p2,q2) of the two line segments. Check if they intersect or not. If the Line intersects return true otherwise return false.

### Examples
#### Input:
p1=(1,1), q1=(10,1), p2=(1,2), q2=(10,2)
#### Output:
false
#### Explanation:
The two line segments formed by p1-q1 and p2-q2 do not intersect.

#### Input:
p1=(10,0), q1=(0,10), p2=(0,0), q2=(10,10)
#### Output:
true
#### Explanation:
The two line segments formed by p1-q1 and p2-q2 intersect.

###### Expected Time Complexity: O(1)
###### Expected Auxillary Space: O(1)

### Constraints:
-$`10^6`$ <= X,Y(for all points) <= $`10^6`$

