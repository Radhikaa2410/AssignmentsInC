//calculate bmi 
#include <stdio.h>

int main() 
{
    float w, h, bmi;
    int cat;
    printf("Enter weight in kilograms: ");
    scanf("%f", &w);
    printf("Enter height in meters: ");
    scanf("%f", &h);
    bmi = w / (h * h);
    if (bmi < 15)
    {
        cat = 1;
    }
    else if (bmi >= 15.1 && bmi <= 17.5)
    {
        cat = 2;
    }
    else if (bmi >= 17.6 && bmi <= 18.5)
    {
        cat = 3;
    }
    else if (bmi >= 18.6 && bmi <= 24.9)
    {
        cat = 4;
    }
    else if (bmi >= 25 && bmi <= 25.9)
    {
        cat = 5;
    }
    else if (bmi >= 30 && bmi <= 39.9)
    {
        cat = 6;
    }
    else if (bmi >= 40)
    {
        cat = 7;
    }
    else
    {
        cat = 0;
    }
    switch (cat) 
    {
        case 1:
            printf("Your BMI is %.2f: Starvation\n", bmi);
            break;
        case 2:
            printf("Your BMI is %.2f: Anorexic\n", bmi);
            break;
        case 3:
            printf("Your BMI is %.2f: Underweight\n", bmi);
            break;
        case 4:
            printf("Your BMI is %.2f: Ideal\n", bmi);
            break;
        case 5:
            printf("Your BMI is %.2f: Overweight\n", bmi);
            break;
        case 6:
            printf("Your BMI is %.2f: Obese\n", bmi);
            break;
        case 7:
            printf("Your BMI is %.2f: Morbidly Obese\n", bmi);
            break;
        default:
            printf("Invalid BMI calculation.\n");
    }

    return 0;
}