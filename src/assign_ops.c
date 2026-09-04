#include <stdio.h>
#include "main_header.h"



void assign_ops() {
    /*
        https://www.programiz.com/c-programming/c-operators
    */
    int a = 5, c;

    c = a;      // c is 5
    printf("c = %d\n", c);
    c += a;     // c is 10 
    printf("c += %d\n", c);
    c -= a;     // c is 5
    printf("c -= %d\n", c);
    c *= a;     // c is 25
    printf("c *= %d\n", c);
    c /= a;     // c is 5
    printf("c /= %d\n", c);
    c %= a;     // c = 0
    printf("c percent= %d\n", c);
}