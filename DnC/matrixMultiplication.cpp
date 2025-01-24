/*
 * Matrix Multiplication
 *
 * A = [[A11, A12], [A21, A22]]
 * B = [[B11, B12], [B21, B22]]
 * C = [[C11, C12], [C21, C22]]
 *
 * AxB = C
 *
 * C11 = A11*B11 + A12*B21
 * C12 = A11*B12 + A12*B22
 * C21 = A21*B11 + A22*B21
 * C22 = A21*B12 + A22*B22
 *
 *
 * 8 ops
 * T(n) = 8 T(n/2) + c2, n > 1
 * c1, n == 1
 *
 *
 * split into 4 n/2 x n/2 matrices (for each) -> 8 cuz 2 matrices
 *
 * in the tree, log(n) + 1 levels
 * each node has 8 leaves
 *
 * 8^(log2(n))c1 + [c2 + 8c2 + 64c2 + ... + log2(n)c2]
 * n^3 + c2(8^(log2(n))-1)/(8-1)
 * n^3 + c2*(n^3 - 1)/7
 * n^3 + c_3 n^3 - c_4
 *
 * O(n^3)
 *
 *
 * f(a,b,c,n) {
 *  BASE CASE
 *  if (n == 1) {
 *    c11 += a11*b11
 *  }
 *
 * ..slides se copy karna hai baaki ka
 * }
 */

/*
 * Strassen's Algorithm
 * Instead of dividing into 8 subproblems, we are dividing it into 7 sub
 * problems
 *
 * P1 = A11*S1
 * P2 = S2*B22
 * P3 = S3*B11
 * P4 = A22*S4
 * P5 = S5*S6
 * P6 = S7*S8
 * P7 = S9*S10
 *
 *
 *
 * S1 = B12 - B22
 * S2 = A11 + A12
 * S3 = A21 + A22
 * S4 = B21 - B11
 * S5 = A11 + A22
 * S6 = B11 + B22
 * S7 = A12 - A22
 * S8 = B21 + B22
 * S9 = A11 - A21
 * S10 = B11 + B12
 *
 *
 * Calculating S(i) = 10*c1*n^2 = Theta(N^2)
 *
 *
 * C11 = P5 + P4 - P2 + P6
 * C12 = P1 + P2
 * C21 = P3 + P4
 * C22 = P5 + P1 - P3 - P7
 *
 * 3c1 n^2 + c1 n^2 + c1 n^2 + 3 c1 n^2 = Theta (N^2)
 *
 * T(n) = 7T(n/2) + Theta(N^2) + Theta(N^2)
 *
 * T(n) = C1 7^(logn) + c1 n^(log7) + c2 n^2
 * Therefore, T(n) = O(n^log 7) = o(n^(2.81))
 *
 * N needs to be a power of 2
 * If not, pad with 0s
 *
 * If it's rectangular, pad it with 0s till we gwt the largest of the sides, and
 * then pad it with 0s until it's a power of 2
 */