/*
===============================================================================
Example 1:
    calling a void function
===============================================================================
*/

// preprocessor/header files
#include <stdio.h>
#include <strings.h>

// function declarations
void calledIt(void);

int main(void)
{
    printf("Start program here.\n");
    printf("Introduce fucntion call.\n");
    calledIt();
    printf("function calledIt says man = number above.\n");
	return 0;
}

// Function returns nothing (type void). 1 variable. No arguments. (void)
void calledIt(void)
{
    int man = 5;
    printf("Man is %d outside main.\n", man);
}