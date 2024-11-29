#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{

    float temp;
    char unit;

    printf("The Temprature is in (C) or (F)?: ");
    scanf("%c", &unit);
    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("Enter The Temprature In Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The Temprature is %.3f in Fahrenheit", temp);
    }

    else if (unit == 'F')
    {
        printf("Enter The Temprature In Fahrenheit: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("The Temprature %.3f In Celsius", temp);
    }

    else
        (printf("NOT VALID INPUT"));




    return 0;
}