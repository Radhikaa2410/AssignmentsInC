#include <stdio.h>

int main() 
{
    int L;  // limit for checking cubes
    int a, b, c, d; 
    printf("Enter limit: ");
    scanf("%d", &L);
    printf("Ramanujan numbers up to limit %d:\n", L);
    for (a = 1; a <= L; a++) //lexicographic order
    {
        for (b = a + 1; b <= L; b++) 
        {
            for (c = a + 1; c <= L; c++) 
            {
                for (d = c + 1; d <= L; d++) 
                {
                    if ((a*a*a + b*b*b) == (c*c*c + d*d*d))
                    {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               a*a*a + b*b*b, a, b, c, d);
                    }
                }
            }
        }
    }
    return 0;
}