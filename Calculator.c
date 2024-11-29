#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{

        float x, y;
        char operation;
        operation = toupper(operation);

        printf("\n1-Add, 2-Sub, 3-Div, 4-Multy, 5-SQRT, 6-Pwr, 7-Sqr, 8-RndOf\n");
        printf("ENTER THE OPERATION: ");
        scanf("%c", &operation);
        
        switch (operation)
        {

        case '1':
                printf("\nEnter The Value Of X: ");
                scanf("%f", &x);
                printf("Enter The Value Of Y: ");
                scanf("%f", &y);
                float add = x + y;
                printf("Result is %.3f", add);
                break;

        case '2':
                printf("\nEnter The Value Of X: ");
                scanf("%f", &x);
                printf("Enter The Value Of Y: ");
                scanf("%f", &y);
                float sub = x - y;
                printf("Result Is %.3f", sub);
                break;

        case '3':
                printf("\nEnter The Value Of Numerator: ");
                scanf("%f", &x);
                printf("Enter The Value Of Denominator: ");
                scanf("%f", &y);
                float div = x / (float)y;
                printf("Result Is %.3f", div);
                break;

        case '4':
                printf("\nEnter The Value Of X: ");
                scanf("%f", &x);
                printf("Enter The Value Of Y: ");
                scanf("%f", &y);
                float mult = x * y;
                printf("Result Is %.3f", mult);
                break;

        case '5':
                printf("\nEnter The Number: ");
                scanf("%f", &x);
                float ans = sqrt(x);
                printf("The SQRT is %.3f\n", ans);
                break;

        case '6':
                printf("\nEnter The Base: ");
                scanf("%f", &x);
                printf("Enter The Power: ");
                scanf("%f", &y);
                float pwr = pow(x, y);
                printf("Result IS %.3f", pwr);
                break;

        case '7':
                printf("\nEnter The Value of X: ");
                scanf("%f", &x);
                float sqr = x * x;
                printf("Result Is %.3f", sqr);
                break;

        case '8':
                printf("\nEnter The Value Of X: ");
                scanf("%f", &x);
                int rnd = round(x);
                printf("The Round Off Is: ");
                printf("%i", rnd);
                break;
                
        default:
                printf("Wrong Input");
                break;
        }

        return 0;
}