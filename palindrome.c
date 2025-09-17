#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) 
        {
            printf("%d", j);
        }
        for (int j = i-1; j >= 1; j--) //leading zeroes not printed
        {
            printf("%d",j);
        }
        printf("\n");
    }
}