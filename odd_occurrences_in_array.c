#include <stdio.h>

/*
 * OddOccurrencesInArray
 * Find value that occurs in odd number of elements.
 *
 * solution
 * A - array to search
 * N - length of array
 *
 */

int solution(int A[], int N)
{
    int result = 0;

    for (int i = 0; i < N; i++)
    {
        result = result ^ A[i];
    }

    return result;
}

int main(void)
{
   /*Array to test*/
   int A[] = { 9, 3, 9, 3, 9, 7, 9};
   
   /*length 7*/
   int x = solution(A, 7);
   
   /*Should be */
   printf("Result is %d", x);
}