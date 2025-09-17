#include <stdio.h>
#include <math.h>
int main()
{
    int n,c=1;
    printf("enter number of elements you want to print");
    scanf("%d",&n); //15
    int r;
    if(n==1)
    {
        printf("%d",n);
    }
    else if(n%2==0||n%3==0)
    {
       r=((-1)+sqrt(1+8*n))/2;
       for(int i=1;i<=r;i++) //number of rows
        {
           for(int j=r;j>i;j--)//number of spaces
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
    }
    else
    {
        printf("Pyramid is not possible");
    }

    return 0;
}