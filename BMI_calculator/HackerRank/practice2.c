#include <stdio.h>

int main()
{
    char c, *ptr_c;

    c = 'A';
    printf("c: address = %p, content = %c\n", &c, c);
    ptr_c = &c;
         printf("ptr_c: address = %p, content = %p\n", &ptr_c, ptr_c); 
         //the content in ptr_c is the address of c
         printf("*ptr_c => %c\n", *ptr_c);
    *ptr_c = 'B';
          printf("ptr_c: address = %p, content = %p\n", &ptr_c, ptr_c);
          printf("*ptr_c => %c\n", *ptr_c);
        // we've already changed the content of c
    printf("c: address = %p, content = %c\n", &c, c);
    return 0;
    //A memory location can be pointed to by more than one pointer. For example, given
    //that c = ‘A’ and that ptr_c1 and ptr_c2 are two character pointer variables,
    //ptr_c1 = &c and ptr_c2 = &c set the two pointer variables to point to the same
    //location in the memory
}