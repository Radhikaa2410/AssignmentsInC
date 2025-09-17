#include <stdio.h>
void sum() 
{
    int a = 5, b = 10;     // local variables (exist only inside this function)
    int s = a + b;         // local variable
    printf("Inside sum(): a = %d, b = %d, sum = %d\n", a, b, s);
}

int main() 
{
    sum();

    // Error if we try to access s here:
    // printf("%d", s);  // This will not compile, because s is local to sum()

    return 0;
}