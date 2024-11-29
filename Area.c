#include <stdio.h>
int main()
{
    char type;
    printf("Enter The Shape (S-Square,T-Triangle,C-Circle): ");
    scanf("%c,", &type);

    if (type == 's')
    {
        int a;
        printf("Enter The Value Of Side: ");
        scanf("%i", &a);

        int area = a * a;
        printf("The Area Of The Square With Side Of %icm  is: %i ", a, area);
    }
    else if (type == 't')
    {
        int b, h;
        printf("Enter The Base Of Triangle: ");
        scanf("%i", &b);
        printf("Enter The Height OF Triangle: ");
        scanf("%i", &h);
        
        int area = (0.5 * b * h);
        printf("The Area Of Triangle With Base Of %icm and Height Of %icm Is: %i", b, h, area);
    }
    else if (type == 'c')
    {
        float r;
        const float pie = 3.14;
        printf("Enter The Radius Of Circle: ");
        scanf("%f", &r);

        float area = (pie * r * r);
        printf("The Area Of Circle With Radius Of %.1fcm Is: %.2f", r, area);
    }

    else
    {
        printf("Please Enter The Valid Shape");
    }

    return 0;
}