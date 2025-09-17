/*The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years.
 Write a program to determine the population at the end of each year in the last decade. 
simple program with loops in c and explain every variable and logic*/
#include <stdio.h>
int main(void) 
{
    double pop = 100000.0;  
    double gr = 0.10;      // 10% per year expressed as decimal (10% = 0.10)
    int n = 10;                                    
    for (int i = 1; i <= n; ++i) 
    {
        pop = pop * (1.0 + gr);
        printf("End of year %d: population = %.2f\n", i, pop);
    }
    return 0;
}