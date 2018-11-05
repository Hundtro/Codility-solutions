#include <stdio.h>

/*
 * PermCheck
 * Check whether array A is a permutation.
 *
 * solution
 * A - array to check
 * N - length of array
 *
 */

int solution(int A[], int N)
{
    int result = 1;
    int B[N];
    
    for (int i = 0; i < N; i++) {
        B[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        if (A[i] > N || B[A[i]] == 1) {
            result = 0;
            break;
        } else {
            B[A[i]] = 1;
        }
    }

    return result;
}

int main(void)
{
    /* Arrays yo test */
    int A[4] = {4, 1, 3, 2};
    int B[3] = {4, 1, 3};

    int x = solution(A, 4);
    /* Result is 1 */
    printf("Result is %d", x);

    x = solution(B, 3);
    /* Result is 0 */
    printf("Result is %d", x);
}
