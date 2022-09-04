#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char cap[] = "Use malloc() to allocate memory.";
    char *ptr_cap;
    int result;
    /*call malloc*/
    ptr_cap = malloc(strlen(cap) + 1);
    //we use strlen to obtain the length of cap
    if (ptr_cap != NULL)
    {
        StrCopy(cap, ptr_cap);
        printf("The string pointed to by ptr_cap is: \n%s\n", ptr_cap);
        result - 0;
    }
    else
    {
        printf("malloc() function failed.\n");
        result = 1;
    }
    return result;
}

/* function definition*/
void StrCopy(char *str1, char *str2)
{
    int i;

    for(i=0; str1[i]; i++)
        str2[i] = str1[i];
    str2[i] = '\0';
}