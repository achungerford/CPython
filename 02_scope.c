/*
===============================================================================
Example 3:
    Demonstrate function scope with variables.
===============================================================================
*/

// preprocessor/header files
#include <stdio.h>
#include <strings.h>

// function declarations
void calledIt(void);
void superMan(void);

int main(void)
{
    /* int superman = 20;
    printf("Start program here.\n");    
    superMan();
    printf("%d\n", superman);
    printf("\nEnd program here.\n"); */

    int man = 10;

    printf("Start program here.\n");
    printf("Introduce fucntion call.\n");
    calledIt();
    printf("function calledIt says man = number above.\n\n");

    printf("What does 'main' say?\n");
    printf("Main says that man = %d\n", man);

    printf("Finally, what does calledItMan say?");
    calledItMan();

    




    return 0;
}


/*
    Function definitions
*/


void calledIt(void)
{
    int man = 5;
    printf("Man is %d outside main.\n", man);
}

void calledItMan(void)
{
    int man = 3;
    printf("calledItMan says man = %d\n", man);
}