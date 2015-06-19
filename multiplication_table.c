#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;
    int j;

    for(i=1; i<=9; i++)
    {
        for(j=1; j<=9; j++)
        {
            printf("%d * %d = %d\n", i, j, i*j);
        }
    }

    getchar(); /* exit */
    return 0;
}
