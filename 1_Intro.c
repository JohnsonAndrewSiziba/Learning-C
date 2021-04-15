/* 
Multi line comment
*/

//Single line comment

#include <stdio.h> //for input and output
#include <string.h>

#define MYNAME "Johnson" //constant

int globalVar = 100; // global variable

int main() {

    char firstLeter = 'D'; //character

    int age = 25;

    long int superBig = -3676385872387;

    float piValue = 3.14159;

    double reallyBigPi = 3.14159141591415914159141591415914159;

    printf("\n");

    printf("This will print to screen. \n\n");

    printf("I am %d years old. \n\n", age); //d for printing out integers

    printf("Long %ld \n\n", superBig);

    printf("Pi %.5f \n\n", piValue);

    printf("Double %.15f \n\n", reallyBigPi); // also use f for double

    printf("Char: %c \n\n", firstLeter);

    printf("My name is %s \n\n", "Ender");

    char myName[50] = "Ender Siziba";

    //char myName[] = "Ender Siziba";

    strcpy(myName, "Johnson Andrew"); //changing a string

    printf("My name is %s \n\n", myName);

}


//gcc CTutorial.c
// ./a.out