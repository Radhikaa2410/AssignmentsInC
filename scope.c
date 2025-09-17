#include <stdio.h>
int main() 
{
    int a = 5;   // declared in main() block
    printf("In main(): a = %d\n", a);

    {   // Block 1
        int b = 10;  // local to this block only
        printf("Inside Block 1: a = %d, b = %d\n", a, b);
        
        {   // Nested Block 2
            int c = 15; // local to this nested block
            printf("Inside Block 2: a = %d, b = %d, z = %d\n", a, b, c);
        }

        // c is NOT accessible here (outside Block 2) → ERROR if we try
        // printf("%d", c); 
    }

    // b is NOT accessible here (outside Block 1) → ERROR if we try
    // printf("%d", b); 

    return 0;
}