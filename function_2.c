#include <stdio.h>

/*
Function Type:
Return value + No parameters

This function does not receive any values
from main().

Instead, it creates its own values,
calculates the result,
and returns it.
*/

/*
Function Definition

Return type : int
Function name : sum

No parameters because nothing is passed
from main().

*/

int sum()
{
    /*
    Step 1:

    Create local variables.

    These variables belong only
    to this function.

    */

    int x = 10, y = 20;

    /*
    Step 2:

    Calculate the sum.

    */

    int s = x + y;

    /*
    Step 3:

    Return the calculated value
    back to main().

    */

    return s;
}

int main()
{
    /*
    Step 4:

    Call the function.

    Since there are no parameters,
    simply write:

    sum()

    The returned value is stored
    inside result.

    */

    int result = sum();

    printf("Result: %d\n", result);

    return 0;
}