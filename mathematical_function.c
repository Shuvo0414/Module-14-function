#include <stdio.h>
#include <math.h>   // this header file need for this mathematical function.
#include <stdlib.h> // Required for abs()

int main()
{

    /*
    ceil()

    Returns the smallest integer
    greater than or equal to the given number.

    It always rounds UP.

    Example:

    5.2 -> 6.0
    7.0 -> 7.0
    3.9 -> 4.0

    */

    // double c;
    // scanf("%lf", &c);
    // double cResult = ceil(c);
    // printf("%.1lf\n", cResult);

    /*
    floor()

    Returns the largest integer
    less than or equal to the given number.

    It always rounds DOWN.

    Example:

    5.8 -> 5.0
    7.0 -> 7.0
    3.2 -> 3.0

    */

    // double f;
    // scanf("%lf", &f);

    // double fResult = floor(f);

    // printf("%.1lf\n", fResult);

    /*
       round()

       Returns the nearest integer
       to the given number.

       If the decimal part is:

       0.5 or greater  -> round UP

       Less than 0.5   -> round DOWN

       Examples:

       round(5.2) = 5.0
       round(5.5) = 6.0
       round(5.8) = 6.0

       round(8.4) = 8.0
       round(8.5) = 9.0

    */

    // double a;
    // scanf("%lf", &a);
    // double r = round(a);
    // printf("%.2lf", r);

    /*
    sqrt()

    Returns the square root
    of the given number.

    Syntax:

    sqrt(number)

    The function returns
    a double value.

    Examples:

    sqrt(25) = 5.0000
    sqrt(49) = 7.0000
    sqrt(10) = 3.1623
    sqrt(2)  = 1.4142

    */
    // double a;
    // scanf("%lf", &a);
    // double s = sqrt(a);
    // printf("%.4lf", s);

    /*
    pow()

    Returns the value of
    a number raised to the power
    of another number.

    Syntax:

    pow(base, exponent)

    The function returns
    a double value.

    Examples:

    pow(2, 3) = 8
    pow(5, 2) = 25
    pow(10, 0) = 1
    pow(9, 0.5) = 3

    */
    // int x, y;
    // scanf("%d %d", &x, &y);

    // int p = pow(x, y);

    // printf("%d", p);

    /*
    abs()
    
    Returns the absolute value
    of an integer.
    
    Absolute value means the number
    without its sign.
    
    Negative numbers become positive.
    Positive numbers remain unchanged.
    
    Syntax:
    
    abs(number)
    
    Examples:
    
    abs(-10) = 10
    abs(15)  = 15
    abs(0)   = 0
    
    */

    int a;
    scanf("%d", &a);

    int result = abs(a);

    printf("%d\n", result);

    return 0;
}