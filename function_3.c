#include <stdio.h>

/*
Function Type:
No return value + Parameters

This function receives two values
from main().

It calculates the sum and prints
the result inside the function.

Since the function prints the result itself,
it does not return any value.
*/

/*
Function Definition

Return type : void

Function name : sum

Parameters :

int x
int y

x and y receive values
from main().

*/

void sum(int x, int y)
{

    /*
    Step 1:

    Calculate the sum
    of x and y.

    */

    int s = x + y;

    /*
    Step 2:

    Print the result.

    Since this function has no return type,
    we print the answer here instead of
    returning it.

    */

    printf("%d", s);
}

int main()
{

    /*
    Step 3:

    Take two numbers as input.

    */

    int a, b;
    scanf("%d %d", &a, &b);

    /*
    Step 4:

    Call the function.

    The values of a and b
    are copied into x and y.

    Since the function returns nothing,
    simply call:

    sum(a, b);

    */

    sum(a, b);

    return 0;
}