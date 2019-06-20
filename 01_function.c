/*
    Demonstrating Python's PEP 7 formatting for C programs.
*/

    // C format choices
        // define functions before you call them OR
        // declare the functions, then call them, define below the call

/*
     for anything before Python 3.6
     all declarations must be at the top of a block
     (not necessarily at the top of function)
*/



/*
===============================================================================
Example 2: Function Declarations before the call & definition
===============================================================================
*/

// preprocessor/header files
#include <stdio.h>
#include <strings.h>

/*
    function declarations rquire a semicolon;
    only needs variable types (int, int), not names
    function type is void bc no return statement;
*/

// function declaration
void superMan(int, int);

int main(void)  // start program
{
	
    printf("Start program here.\n");    // first line, new line symbol
    superMan(5, 1);                     // control jumps to superMan below

    // system("pause");
	return 0;  // end program
}


/*  FUNCTION DEFINIION BELOW
    function name = superMan
    function type = void
    function declares 3 variables = super, man, superman
    function requires 2 arguments (super, man); must be integers
*/
void superMan(int super, int man)   //
{
    int superman = super + man;
    printf("%d", superman);
}