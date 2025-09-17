//Pattern with a counter variable
#include <stdio.h>
int main()
{
    int n;
    printf("enter number of rows");
    scanf("%d",&n);
    int c=1;
    for(int i=1;i<=n;i++)//number of rows
    {
        for(int j=n;j>i;j--)//number of spaces
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)//number of columns
        {
        printf("%d ",c);
        c++;
        }
        printf("\n");
    }
    return 0;
}