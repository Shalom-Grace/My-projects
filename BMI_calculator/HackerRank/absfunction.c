#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
  int x = *a + *b;
  int y = *a - *b;

  *a = x;
  *b = abs(y);
}

/* void update(int *a,int *b) receives two integer pointers, int* a and int* b.
/* Set the value of a to their sum, and b to their absolute difference.
/* There is no return value, and no return statement is needed.
*/
int main() {
  int a;
  int b;

  scanf("%d %d", &a, &b);

  int *pa = &a;
  int *pb = &b;
  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}