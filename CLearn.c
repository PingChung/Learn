#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i = 1;
    
    printf("%d\n", i++);
    printf("%d\n", i);
    i = 1;
    printf("%d\n", ++i);

    getchar();
    return 0;

}