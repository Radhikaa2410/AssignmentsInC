#include <stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter the three sides of a triangle");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1+s2>s3||s2+s3>s1||s1+s3>s2)
    {
        printf("Triangle is valid/n");
        if(s1*s1==(s2*s2)+(s3*s3)||s2*s2==(s1*s1)+(s3*s3)||s3*s3==(s2*s2)+(s1*s1))
        {
            if(s1==s2||s2==s3||s1==s3)
            {
                printf("right angeled isoceles Triangle");
            }
            else 
            {
                printf("right angeled scalene triangle");
            }
        }
        else if((s1==s2)&&(s1==s3))
        {
            printf("Equilateral Triangle");
        }
        else if(s1==s2||s2==s3||s1==s3)
        {
            printf("Isoceles Triangle");
        }
        else
        {
           printf("Scalene Triangle");
        }
    }
    else
    {
        printf("Triangle is not valid");
    }
    return 0;
}