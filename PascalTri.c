#include <stdio.h>
#include <math.h>
int main()
{
   int n,num,coef;
   printf("Enter number of rows: ");
   scanf("%d", &n);
   for (int i = 0; i < n; i++) 
   {
      for (int j= 0;j<n-i-1; j++) 
      {
         printf(" ");
      }

      coef = 1; // First number in every row is always 1
      for (int j=0;j<=i;j++) 
      {
         printf("%d ", coef);
         coef = coef * (i - j) / (j + 1);
      }

      printf("\n");
   }
   return 0;
}
