
#include <stdio.h>
#include <stdarg.h>

int sum(int pose,...);
int min(int pose,...);
int max(int pose,...);

int main ()
{
    printf("In this problem, you will implement three variadic functions named,  and  to calculate sums, minima,\n");
    printf("maxima of a variable number of arguments. The first argument passed to the variadic function \n");
    printf("is the count of the number of arguments, which is followed by the arguments themselves.\n");

    printf("\nSOLUTION:\n\n");

    printf("The sum is: %d\n", sum(3, 5, 5, 2));
    printf("The maximum is: %d\n", max(3, 350, 550, 989));
    printf("The minimum is: %d\n", min(3, 650, 863, 564));
    
}

//Define a function sum (), this will take count, and variable number of arguments
int sum(int pose,...)
{
//define va_list arglist
va_list arglist;
int i;
int result = 0;

printf("The number of argument(s) is %d\n", pose);
va_start (arglist, pose);
for(i=0; i<pose; i++)
    result += va_arg(arglist, int);
    va_end(arglist);
    return result;
}

int min(int pose,...)
{
va_list arglist;
int current, i, minimum;
va_start (arglist, pose);
minimum = 999;

for(i=0; i<pose; i++)
{
    current = va_arg(arglist, int);
    if(current < minimum)
        minimum = current;
}
va_end(arglist);
return minimum;
}

int max(int pose,...)
{
va_list arglist;
int i, current, maximum;
va_start(arglist, pose);
maximum = 0;

for(i=0; i<pose; i++)
{
    current = va_arg(arglist, int);
    if(current > maximum)
        maximum = current;
}
va_end(arglist);
return maximum;
}
