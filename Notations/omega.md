# Omega Notation
omega(g(n)) = {f(n): there exist positive constants c and n0 such that 0 <= c*g(n) <= f(n) for all n >= n0}.

In simple terms, omega(g(n)) is the set of functions that grow at least as fast as g(n).

## Example
### Example 1
f(n) = 2n^2 + 3n + 1
g(n) = n^2

f(n) = 2n^2 + 3n + 1 >= 2n^2 for all n >= 1
=> f(n) = omega(n^2)

### Example 2
f(n) = 3n^2 - 200
0 <= cn^2 <= 3n^2 - 200 for all n >= n0
0 <= c <= 3 - 200/n^2 for all n >= n0

As n approaches infinity, 200/n^2 approaches 0
At n = 10, c <= 0.5

c = 0.5, n0 = 10


If we chose g(n) = n^3
3n^2 - 200 = omega(n^3)

0 <= cn^3 <= 3n^2 - 200 for all n >= n0
0 <= c <= 3/n - 200/n^3 for all n >= n0

As n approaches infinity, 200/n^3 approaches 0
At n = 10, c <= 0.3

However, we can't find a constant c such that 0 <= c*n^3 <= 3n^2 - 200 for all n >= n0
Therefore, 3n^2 - 200 != omega(n^3)

## Stuff
Omega notation is used to find the best case time complexity of an algorithm.

