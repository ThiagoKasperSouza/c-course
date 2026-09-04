#include <stdio.h>
#include "main_header.h"

void ascii_ops() {
    /* Implicit conversion */
    char a = '5';
    int b = 2;
    int c = a+b;
    printf("ascii sum: %d\n",c);
}
