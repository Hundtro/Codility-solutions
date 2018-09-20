#include <stdio.h>

/*
 * CyclicRotation
 * Rotate an array to the right by a given number of steps.
 *
 * Results
 * A - returned array
 * N - length of array
 *
 * solution
 * A - array to rotate
 * N - length of array
 * K - number of rotations
 *
 */

struct Results
{
    int* A;
    int N;
};

struct Results solution(int A[], int N, int K)
{
    struct Results result;

    for (int i = 0; i < K; i++)
    {
        for (int ii = N - 1; ii > 0; ii--)
        {
            int tmp = A[ii];
            A[ii] = A[ii - 1];
            A[ii - 1] = tmp;
        }
    }
    result.A = A;
    result.N = N;

    return result;
}

int main(void)
{
    /*Array to test*/
    int A[] = {3, 8, 9, 7, 6};
    
    /*5 length, 3 times rotate*/
    struct Results r = solution(A, 5, 3);
    
    /*Should be 9*/
    printf("A[0] is %d", r.A[0]);
}
