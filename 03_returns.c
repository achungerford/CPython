/*
    Demonstrating Python's PEP 7 formatting for C programs.

    C format choices
    define functions before you call them OR
    declare the functions, then call them, define below the call

    for anything before Python 3.6
    all declarations must be at the top of a block
    (not necessarily at the top of function)
*/



/*
===============================================================================
Example 4 Scope: Function, no arguments, return type int
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

// function declarations
void superMan(void);
int batMan(void);

int main(void)  // start program
{
    int superman = 20;
    printf("Start program here.\n");    // first line, new line symbol
    superMan();                        // control jumps to superMan below
    printf("%d\n", superman);

    printf("batMan function returns batman = %d\n", batMan());
    printf("\nEnd program here.\n");

    // system("pause");
    return 0;           // end program
}


/*  FUNCTION DEFINIION BELOW
    function name = superMan
    function type = void
    function declares 3 variables = super, man, superman
    function has no arguments (void);
*/
void superMan(void)
{
    int super = 10, man = 5, superman = super + man;
    printf("%d\n", superman);
}


/*
    RETURN FUNCTIONS
    function name = batMan
    function type = int
    function declares 3 variables, bat, man, batman
    function has no arguments (void);
*/
int batMan(void)
{
    int bat = 10, man = 10, batman;
    batman = bat * man;
    return batman;
}