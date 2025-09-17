#include <stdio.h>
int l, b; //extern only declares.It shows that the variables exist somewhere.
void input() 
{
    printf("Enter length: ");
    scanf("%d", &l);

    printf("Enter breadth: ");
    scanf("%d", &b);
}
void Area() 
{
    int area = l * b;   // using global variables directly
    printf("Area of rectangle = %d\n", area);
}

void display() 
{
    printf("Length = %d, Breadth = %d\n", l, b);
}

int main() 
{
    input();    // set values of global variables
    display();  // access them inside another function
    Area();      // use them for calculation

    return 0;
}