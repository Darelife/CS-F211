# o notation

o notation is used to represent the upper bound of the time complexity of an algorithm. It is the set of functions that grow slower than or at the same rate as the function g(n).

--------------------

2n^2 + 1 != o(n^2)
because, for all c > 0, there exists a constant n0 such that 0 <= c*n^2 < 2n^2 + 1 for all n >= n0

0 <= 2n^2 + 1 < cn^2, n>=n0
0 <= 2 + 1/n^2 < c, n>=n0
This inequality must exist for any c > 0, which is not possible.
For c = 1, we can't find anything.

--------------------

2n^2 + 1 = o(n^3)
0 <= 2n^2 + 1 < cn^3, n>=n0
0 <= 2/n + 1/n^2 < c, n>=n0

Now, for any c > 0, we can find a constant n0 such that the inequality holds.