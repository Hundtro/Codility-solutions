#include <stdio.h>

/*
 * Binary Gap
 * Find longest sequence of zeros in binary representation of an integer.
 *
 * solution
 * N - integer to count
 */

int solution(int N)
{
    int isgap = 0;
    int length = 0;
    int result = 0;

    while (N != 0) {
        if (N % 2) {
            N = (N - 1) / 2;
            if (!isgap)
                isgap = 1;
            if (length > result)
                result = length;
            length = 0;
        } else {
            N = N / 2;
            if (isgap)
                length++;
        }
    }
    
    return result;
}

int main(void)
{
    int x = solution(561892);
    printf("Result is %d", x);
}
