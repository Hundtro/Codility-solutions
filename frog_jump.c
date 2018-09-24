#include <stdio.h>

/*
 * FrogJmp
 * Count minimal number of jumps from position X to Y.
 *
 * solution
 * X - start position
 * Y - destination
 * D - jump distance
 *
 */

int solution(int X, int Y, int D)
{
    if ((Y - X) % D)
        return (Y - X) / D + 1;
    else
        return (Y - X) / D;
}

int main(void)
{
    /* Start 10, destination 85, jump 30*/
    int x = solution(10, 85, 30);
    
    /* Should be 3 */
    printf("Result is %d", x);
}
