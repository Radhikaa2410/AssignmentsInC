//Write a program that prompts the user to enter their name and age. 
#include <stdio.h>
int main()
{
    char name;
    int age;
    printf("Enter name and age");
    scanf("%s%d",&name, &age);
    printf("Name:%s  Age:%d",name,age);
    return 0;
}