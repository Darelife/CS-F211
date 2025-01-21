# w Notation

w notation is used to represent the best case time complexity of an algorithm. It is the set of functions that grow at least as fast as the function g(n).

## Example

f(n) = 2n^2 + 1
g(n) = n^2

0 <= c*n^2 < 2n^2 + 1, n>=n0
0 <= c < 2 + 1/n^2, n>=n0

The inequality won't hold for all c's
For c = 2 or 1, we can't find any n0


----------------
g(n) = n

0 <= c*n < 2n^2 + 1, n>=n0
0 <= c < 2n + 1/n, n>=n0

For c = 2, n0 = 1
For c = 1, n0 = 1

For c = inf, n0 = 1
For n0 = inf-, c = 0+


