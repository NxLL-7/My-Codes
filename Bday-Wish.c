#include <stdio.h>
#include <string.h>

char bday1(char name[], int age)
{

    printf("\nCongratulations ");
    printf("%s", name);
    printf(" On Your %dst BirthDay!!\n", age);
}

char bday2(char name[], int age)
{
    printf("\nCongratulations ");
    printf("%s", name);
    printf(" On Your %dnd BirthDay!!\n", age);
}

char bday3(char name[], int age)
{
    printf("\nCongratulations ");
    printf("%s", name);
    printf(" On Your %drd BirthDay!!\n", age);
}

void bday(char name[], int age)
{
    printf("\nCongratulations ");
    printf("%s", name);
    printf(" On Your %dth BirthDay!!\n", age);
}

int main()
{

    char name[30];
    int age;

    printf("\nHello!!\n");

    printf("\nEnter Your Name: ");
    fgets(name, 30, stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter Your Age: ");
    scanf("%i", &age);

    if (age > 3)
    {
        bday(name, age);
    }

    else if (age == 1)
    {
        bday1(name, age);
    }

    else if (age == 2)

    {
        bday2(name, age);
    }
    else if (age == 3)

    {
        bday3(name, age);
    }

    printf("\nYou Will Be %d Year Old Next Year.", ++age);

    return 0;
}