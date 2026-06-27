#include <stdio.h>

int main()
{
    /*
    x is a normal integer variable.
    Think of it like a box that stores a value (10).
    */

    int x = 10;

    /*
    &x means the address of x.
    Think: every box has a memory location (address).
    */

    printf("%p\n", &x);

    /*
    p is a pointer variable.
    It does NOT store a normal value like 10.
    It stores the ADDRESS of x.

    Think:
    p = a key that knows where the box (x) is located.
    */

    int *p = &x;

    /*
    Printing p gives the same address as &x
    because p stores the address of x.
    */

    printf("%p\n", p);

    /*
    DEREFERENCE OPERATION:
    *p means go to the address stored in p
    and access the value inside it.

    This is called DEREFERENCING.
    */

    printf("%d\n", *p);   // DEREFERENCE (READ VALUE)

    /*
    DEREFERENCE OPERATION (WRITE):
    *p = 100 means go to the address stored in p
    and change the value at that location.

    This updates x because p points to x.
    */

    *p = 100;   // DEREFERENCE (MODIFY VALUE)

    /*
    Now x is changed because p is pointing to x.
    */

    printf("%d", x);

    return 0;
}