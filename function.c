#include <stdio.h>

/*
Function Prototype (Declaration)

Another way to write functions.

We declare the function before main(),
but write the actual function definition
after main().

The prototype tells the compiler:

"There will be a function named sum()
later in the program."

Without the prototype, when main() calls
sum(), the compiler has not seen the function yet,
so it will report an error.
*/

int sum(int x, int y); // Function prototype (no curly braces)

int main()
{
    /*
    Step 1:

    Take two numbers as input.

    */

    int a, b;
    scanf("%d %d", &a, &b);

    /*
    Step 2:

    Call the function.

    The returned value from sum()
    is stored inside result.

    If we don't store the returned value,
    it is lost (unless we use it directly,
    for example: printf("%d", sum(a, b));).

    */

    int result = sum(a, b);

    printf("Result: %d", result);

    return 0;
}

/*
Function Definition

The actual work of the function
is written here.

*/

int sum(int x, int y)
{
    int s = x + y;
    return s;
}