#include <stdio.h>

/*
 * PermMissingElem
 * Find the missing element in a given permutation.
 *
 * solution
 * A - array with permutation
 * N - length of array
 *
 */

int solution(int A[], int N)
{
    int result = 1;
    int sum = 0;
   
    for (int i = 0; i < N; i++) {
       sum += A[i];
       result = result + (i + 2);
    }

    return result - sum;
}

int main(void)
{
    /* array to test */
    int A[4] = {2, 3, 1, 5};
    
    /* x for result */
    int x = solution(A, 4);
    
    /* should be 4 */
    printf("Result is %d", x);
}
