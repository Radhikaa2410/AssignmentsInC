#include <stdio.h>
int main()
{
    int n;
    printf("enter number of rows");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>i;j--)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
        printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
        printf("* ");
        }
        printf("\n");
    }
    return 0;
}