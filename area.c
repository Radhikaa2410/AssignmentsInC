//Write a program to calculate area and perimeter of a rectangle
#include <stdio.h>
int main()
{
    int l,b,ar,pr;
    printf("Enter length and breadth of rectangle respectively ");
    scanf("%d%d",&l,&b);
    ar=l*b;
    pr=2*(l+b);
    printf("Area:%d\n",ar);
    printf("Perimeter:%d",pr);
}