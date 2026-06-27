#include <stdio.h>

/*
Function Type:
No return value + No parameters

This function does not receive any values
from main().

It takes input, performs the calculation,
and prints the result inside the function.

Nothing is returned back to main().
*/

/*
Function Definition

Return type : void

Function name : sum

No parameters because no values
are passed from main().

*/

void sum()
{

    /*
    Step 1:

    Take input inside the function.

    */

    int a, b;
    scanf("%d %d", &a, &b);

    /*
    Step 3:

    Print the result.

    Since this function has no return value,
    the answer is printed here.

    */

    printf("%d\n", s);
}

int main()
{

    /*
    Step 4:

    Call the function.

    No arguments are needed because
    the function has no parameters.

    */

    sum();

    return 0;
}