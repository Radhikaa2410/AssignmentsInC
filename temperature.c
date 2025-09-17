//WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32. 
#include <stdio.h>
int main()
{
   float c,f;
   printf("Enter temperature in celsius");
   scanf("%f",&c);
   f=(c*9)/5+32;
   printf("Entered temperature in fahrenheit is %f",f);
   return 0;
}