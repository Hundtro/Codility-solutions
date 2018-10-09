#include <stdio.h>

/*
 * TapeEquilibrium
 * Minimize the value |(A[0] + ... + A[P-1]) - (A[P] + ... + A[N-1])|.
 *
 * solution
 * A - array to check
 * N - length of array
 *
 */

int solution(int A[], int N)
{
    int result = 0;
    int part1 = 0;
    int part2 = 0;
    
    for (int i = 0; i < N; i++) {
        part2 += A[i];
    }
    for (int i = 0; i < (N - 1); i++) {
        part1 += A[i];
        part2 -= A[i];
        if (i == 0 || abs(part1 - part2) < result)
            result = abs(part1 - part2);
    }

    return result;
}

int main(void)
{
    /*Array to test*/
    int A[5] = {3, 1, 2, 4, 3};
    
    int x = solution(A, 5);
    
    /*Should be 1*/
    printf("Result is %d", x);
}
