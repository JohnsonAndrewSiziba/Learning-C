#define MYNAME "Ender"

int globalVar = 100;

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    char middleInitial;
    printf("What is yout middle initial? ");
    scanf(" %c", &middleInitial);

    printf("You entered: %c \n\n", middleInitial);

    char firstName[30], lastName[30];

    printf("What is your name? ");

    scanf(" %s %s", firstName, lastName);

    printf("Hi, %s %c. %s. \n\n", firstName, middleInitial, lastName);

    int month, day, year;

    printf("What's your birth date? ");

    scanf(" %d/%d/%d", &day, &month, &year);

    printf("\nYour birthdate is: %d/%d/%d\n\n", day, month, year);

    return 0;
}
