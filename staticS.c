#include <stdio.h>
// Function to calculate sum and to calculate how many times the function has been called
void sum(int a, int b) 
{
    static int c;   // static local variable
    int result;

    result = a + b;
    c++;  // persists across calls

    printf("Sum of %d and %d = %d\n", a, b, result);
    printf("sum() has been called %d time(s)\n\n", c);
}

int main() 
{
    sum(5, 10);    // first call
    sum(20, 30);   // second calla
    sum(100, 200); // third call

    return 0;
}