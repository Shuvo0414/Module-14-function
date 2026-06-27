#include <stdio.h>

/*
Function Type:
Return value + Parameters

This function receives two numbers,
adds them, and returns the result.
*/

/*
Function Definition

Return type : int
Function name : sum
Parameters : int x, int y

x and y are local variables.
They receive values from main() when the function is called.
*/

int sum(int x, int y)
{
    /*
    Step 1:

    Calculate the sum of x and y.

    Example:

    x = 5
    y = 7

    s = 12

    */

    int s = x + y;

    /*
    Step 2:

    Return the calculated value
    back to the function call.

    */

    return s;
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

    The values of a and b are copied
    into x and y.

    Example:

    sum(a, b)

    becomes

    sum(5, 7)

    The returned value is stored
    inside result.

    */

    int result = sum(a, b);

    printf("Result: %d\n", result);

    return 0;
}