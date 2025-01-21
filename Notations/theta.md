# Theta Notation

Theta notation is used to represent the average case time complexity of an algorithm. It is the set of functions that grow at the same rate as the function g(n).

We basically bind the function f(n) from above and below with g(n).

## Example

f(n) = n^2/2 - 3n 

0 <= c1*g(n) <= f(n) <= c2*g(n) for all n >= n0

let g(n) = n^2

0 <= c1*n^2 <= n^2/2 - 3n <= c2*n^2 for all n >= n0
0 <= c1 <= 1/2 - 3/n <= c2 for all n >= n0

As n approaches infinity, 3/n approaches 0
Basically, c2 > 1/2 As the expression will always be <= 1/2

Let n = 10
c1 <= 1/2 - 3/10 = 0.2

c2 >= 0.5, for any n0,
And for n0 = 10, we can get c1 <= 0.2
Similarly, for n0 = 7, we can get c1 <= 0.08
And also, g(n) = n^2

