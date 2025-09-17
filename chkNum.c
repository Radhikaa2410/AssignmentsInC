//WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.
#include <stdio.h>
int main() {
    int n, num;
    printf("How many numbers do you want to enter \n");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        printf("enter value number %d ",i);
        scanf("%d",&num);
        if(num>0)
        {
            printf("Entered number is positive ");
        }
        else if(num<0)
        {
            printf("Entered number is negative ");
        }
        else
        {
            printf("Entered number is zero ");
        }
    }
}