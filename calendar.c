#include <stdio.h>

int main() 
{
    int year, i;
    int totalDays = 0;   // To store total days from year 1 to year-1
    int dayIndex;        // Will be used to determine day of the week
    printf("Enter a year");
    scanf("%d", &year);

    // Count total number of days from year 1 to (year - 1)
    for (i = 1; i < year; i++) 
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) 
        {
            totalDays += 366;  
        } 
        else 
        {
            totalDays += 365; 
        }
    }

    // 01/01/0001 was Monday (index 0), so we do modulo 7
    dayIndex = totalDays % 7;
    printf("1st January %d is a ", year);
    switch (dayIndex) 
    {
        case 0:
            printf("Monday\n");
            break;
        case 1:
            printf("Tuesday\n");
            break;
        case 2:
            printf("Wednesday\n");
            break;
        case 3:
            printf("Thursday\n");
            break;
        case 4:
            printf("Friday\n");
            break;
        case 5:
            printf("Saturday\n");
            break;
        case 6:
            printf("Sunday\n");
            break;
        default:
            printf("Error in calculation.\n");
    }

    return 0;
}