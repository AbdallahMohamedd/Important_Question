#include "stdio.h"
#define FUNCTIONS(name, a) \
    int FUNC_##name(int x) { return (x)*a; }

FUNCTIONS(quadruple, 4) // TO REACH THIS FORM FUNC_quadruple (???) ====> 4 * ???
FUNCTIONS(double, 2)    // TO REACH THIS FORM FUNC_double (???) ====> 2 * ???

int main()
{
    printf("quadruple(10) = %d\n", FUNC_quadruple(10));
    printf("double(10) = %d\n", FUNC_double(10));
}