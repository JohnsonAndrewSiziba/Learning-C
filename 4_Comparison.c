#include <stdio.h>


int main(int argc, char const *argv[])
{
    // >, <, ==, >=, <=, !=
    // returns 1 or 0
    printf("\n");
    int num1 = 1, num2 = 2;
    printf("Is 1 > 2: %d\n\n", num1 > num2); 

    if (num1 > num2)
    {
        printf("%d is greater than %d", num1, num2);
    } else if (num1 < num2)
    {
        printf("%d is less than %d\n\n", num1, num2);
    }
    
    

    return 0;
}


/*
    gcc fileName.c -o ProgramName
    ./ProgramName
*/