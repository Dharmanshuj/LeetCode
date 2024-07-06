# Explaination

### Class Solution and method passThePillow

The code defines a class Solution with a single method passThePillow that takes two integer parameters: n and time.

### Method passThePillow

The method passThePillow calculates the person who has the pillow after time seconds, given a circle of n people.

### Variable q

The first line int q = time / (n-1); calculates the number of complete rounds the pillow has made around the circle.

- time / (n-1) calculates the number of times the pillow has completed a full cycle around the circle. This is because the pillow moves n-1 positions in each cycle (since it starts from person 1 and moves to person n-1, then wraps around to person 1 again).

### Return statement

The return statement is a conditional expression that determines the person who has the pillow based on the value of q.

**Case 1: q is even (q%2 == 0)**

If q is even, the pillow is moving in the original direction (i.e., from person 1 to person n-1 and back to person 1). In this case, the person who has the pillow is at position:

time - q * (n-1) + 1

This calculation works as follows:

- time - q * (n-1) calculates the remaining time after subtracting the time spent on complete cycles.
- Adding 1 to the result gives the person who has the pillow, since the pillow starts from person 1.

**Case 2: q is odd (q%2 != 0)**

If q is odd, the pillow is moving in the opposite direction (i.e., from person n-1 to person 1 and back to person n-1). In this case, the person who has the pillow is at position:

n - time + q * (n-1)

This calculation works as follows:

- n - time calculates the remaining time in the opposite direction.
- Adding q * (n-1) to the result gives the person who has the pillow, since the pillow starts from person n-1 in the opposite direction.

### Overall

The code uses the value of q to determine the direction of the pillow's movement and calculates the person who has the pillow accordingly. The return statement is a concise way to express this logic using a conditional expression.
