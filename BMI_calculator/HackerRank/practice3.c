#include <stdio.h>

int main ()
{
    int j;
    int list_int[10];

    for (j=0; j<10; j++)
    {
        list_int[j] = j + 1;
        printf("list_int[%d] is initialized with %d.\n", j, list_int[j]);
    }
    return 0;
}